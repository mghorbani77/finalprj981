#include <ctime> // for time() used to change random()'s seed

#include <segment.cpp>


// Manage and keep game board

class xData {

private:
    Segment segments [16];
    char SourceL, DestinationL;

public:
    xData(bool Random = true)
//    :segments {Segment(),Segment(),Segment(),Segment(),Segment(),Segment(),Segment(),Segment(),Segment(),Segment(),
//              Segment(),Segment(),Segment(),Segment(),Segment(),Segment()}
    {
        // Set 'x' for Source and Destination Segments
        this->SetSourceDest(0, 3);

        // Set all segment types to knee
        for (int i = 0 ; i < 16 ; i ++)
        {
            this->Set(i, (Types)(0 + rand() % 3), (rand() % 3) * 90);
        }

        // If wasnt random stop
        if (!Random) return;

        // else

        // Generate a random number for a random board.
        int random_integer = 1 + rand() % 3; // from 1 to 3
        // Some random successful ways
        switch (random_integer) {
        case 1:
                this->Set(0, Types::Straight, 0);
                this->Set(1, Types::Straight, 90);
                this->Set(2, Types::Straight, 0);
                this->Set(3, Types::Knee, 270);
                this->Set(7, Types::Straight, 90);
                this->Set(11, Types::Straight, 90);
                this->Set(15, Types::Knee, 90);
                break;
        case 2:
                this->Set(0, Types::Knee, 270);
                this->Set(1, Types::Knee, 0);
                this->Set(2, Types::Knee, 270);
                this->Set(4, Types::Knee, 90);
                this->Set(5, Types::Cross, 0);
                this->Set(6, Types::Knee, 180);
                this->Set(9, Types::Knee, 90);
                this->Set(10, Types::Straight, 0);
                this->Set(11, Types::Knee, 180);
                this->Set(15, Types::Knee, 90);
                break;
        default:
                this->Set(0, Types::Knee, 270);
                this->Set(4, Types::Straight, 90);
                this->Set(8, Types::Knee, 90);
                this->Set(9, Types::Straight, 0);
                this->Set(10, Types::Knee, 90);
                this->Set(14, Types::Knee, 90);
                this->Set(15, Types::Straight, 0);
                break;
        }



    }

    // Getter
    Segment * Get(char index) {
        return &segments[index];
    }

    // Setter
    void Set(char index, Types type, int rotate){
        this->segments[index] = Segment(type, rotate);
    }

    // Set Source and Destination
    void SetSourceDest(char SourceL, char DestinationL){
        this->SourceL = SourceL;
        this->DestinationL = DestinationL;
    }

    // Check the board
    // The logic for the winner board
    bool IsWinnerBoard(int & score) {

        // ========= ENTERANCE =========

        // Find the first connected segment
        char current_index = 0;
        // which enters from top
        Direction next_move=Direction::Top, from = Direction::Top;

        // Set current segment
        switch (this->SourceL) {
        case 0:
            current_index = 0;
            break;
        }


        // ========= INSIDE =========



        // A way in; get next move
        while (true) // it's not on last row (bottom border)
        {

            // Calculate score
            score ++;

            // Recursively find next connected segments connected to this segment
            // using their enum (top, bottom, left, right) values
            next_move = this->Get(current_index)->GetNextMove(from);

            // No way in
            if (next_move == from)
                return false;

            // Test next step
            switch (next_move)
            {
            case Direction::Top:
                if (   current_index == 0 // for example: if current index was 0 and next move was top
                    || current_index == 4
                    || current_index == 8
                    || current_index == 12) // out of top border: -1, 3, 7, 11, 15
                    return false;
                current_index -= 1;
                from = Direction::Bottom;
                break;
            case Direction::Bottom:

                // ========= EXIT =========

                // If reached destination
                switch (this->DestinationL) {
                case 3:
                    if (current_index == 15)
                    return true;
                    break;
                }

                // else
                if (   current_index == 3 // for example:  if current index was 3 and next move was bottom
                    || current_index == 7
                    || current_index == 11
                    || current_index == 15) // out of bottom border
                    return false;

                current_index += 1;
                from = Direction::Top;
                break;
            case Direction::Left:
                if (   current_index == 0 // for example:  if current index was 0 and next move was left
                    || current_index == 1
                    || current_index == 2
                    || current_index == 3) // out of left border
                    return false;
                current_index -= 4;
                from = Direction::Right;
                break;
            case Direction::Right:
                if (   current_index == 12 // for example: if current index was 12 and next move was right
                    || current_index == 13
                    || current_index == 14
                    || current_index == 15) // on right border
                    return false;
                current_index += 4;
                from = Direction::Left;
                break;
            }          
        }
        return false;
    }
};
