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
            this->Set(i, Types::Knee, 0);
        }

        // If was random
        if (!Random) return;

        // TODO: Generate random population

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
        Direction from = Direction::Top;

        // Set current segment
        switch (this->SourceL) {
        case 0:
            current_index = 0;
            break;
        case 1:
            current_index = 4;
            break;
        case 2:
            current_index = 8;
            break;
        case 3:
            current_index = 12;
            break;
        }



        // ========= EXIT =========



        // If reached destination
        switch (this->DestinationL) {
        case 0:
            if (current_index == 3)
            return true;
            break;
        case 1:
            if (current_index == 7)
            return true;
            break;
        case 2:
            if (current_index == 11)
            return true;
            break;
        case 3:
            if (current_index == 15)
            return true;
            break;
        }



        // ========= INSIDE =========



        // A way in; get next move
        while (current_index % 4 != 1) // it's not on last row (bottom border)
        {
            // Recursively find next connected segments connected to this segment
            // using their enum (top, bottom, left, right) values
            Direction next_move = this->Get(current_index)->GetNextMove(from);

            // No way in
            if (next_move == from)
                return false;

            // Test next step
            switch (next_move)
            {
            case Direction::Top:
                current_index -= 1;
                if (current_index % 4 == 1 || current_index == -1) // on top border: -1, 3, 7, 11, 15
                    return false;
                from = Direction::Bottom;
                break;
            case Direction::Bottom:
                current_index += 1;
                if (current_index % 4 == 0) // on bottom border: 4, 8, 12, 16
                    return false;
                from = Direction::Top;
                break;
            case Direction::Left:
                current_index -= 4;
                if (current_index < 0) // on left border
                    return false;
                from = Direction::Right;
                break;
            case Direction::Right:
                current_index += 4;
                if (current_index > 15)
                    return false;
                from = Direction::Left;
                break;
            }

            // Calculate score
            score ++;
        }
    }
};
