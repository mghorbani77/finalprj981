#include <string.h>
#include <stdlib.h>


// Types of segments
enum Types {
    Knee,
    Straight,
    Cross
};

// Directions of each segment
enum Direction {
    Top,
    Bottom,
    Left,
    Right
};

// Model for each segment
class Segment {
private:

    // char: 0 ~ 255

    char top;
    char bottom;
    char left;
    char right;

    int angle = 0;
    Types type;

    char* image;



public:

    void xConstructor(Types type, int rotate )
    {

        top = bottom = left = right = 0; // 0 means closed

        this->angle = rotate;
        this->type = type;

        char *image = (char*)malloc(256);

        switch (type) {
        case Types::Knee:
            this->image = "icons\\knee.png";
            switch (rotate) {
            case 90:
                this->bottom = this->left = 1;
                break;
            case 180:
                this->left = this->top = 1;
                break;
            case 270:
                this->top = this->right = 1;
                break;
            default:
                this->bottom = this->right = 1;
                break;
            }
            break;

        case Types::Straight:
            this->image = "icons\\straight.png";
            switch (rotate) {
            case 90:
            case 270:
                this->left = this->right = 1;
                break;
            case 180:
            default:
                this->top = this->bottom = 1;
                break;
            }
            break;

        case Types::Cross:
            this->image = "icons\\cross.png";
            switch (rotate) {
            case 90:
            case 270:
                this->left = this->right = 1;
                this->top = this->bottom = 2;
                break;
            case 180:
            default:
                this->left = this->right = 2;
                this->top = this->bottom = 1;
                break;
            }
            break;
        }
    }

    Segment (Types type = Types::Knee, int rotate = 0 ) {
       this->xConstructor(type, rotate);
    }

    int Rotate () {
        xConstructor(this->type, (this->angle + 90) % 360);
        return this->angle;
    }

    char * GetImage () {
        return this->image;
    }

    int * GetAngle () {
        return &this->angle;
    }

    Direction GetNextMove(Direction From){

        // temp values
        char _top = this->top,
                _bottom = this->bottom,
                _left = this->left,
                _right = this->right;

        // If was not path in
        if (
                (From == Direction::Top  && _top == 0) ||
                (From == Direction::Left && _left == 0) ||
                (From == Direction::Bottom && _bottom == 0) ||
                (From == Direction::Right && _right == 0)
            )
            return From;

        // Else if there was a path in
        char from_value = 0;
        switch (From) {
        case Direction::Top:
            from_value = _top;
            _top = -1;
        break;
        case Direction::Bottom:
            from_value = _bottom;
            _bottom = -1;
        break;
        case Direction::Left:
            from_value = _left;
            _left = -1;
        break;
        case Direction::Right:
            from_value = _right;
            _right = -1;
        break;
        }

        // Return next path
        if (_top == from_value)
            return Direction::Top;
        if (_bottom == from_value)
            return Direction::Bottom;
        if (_left == from_value)
            return Direction::Left;
        if (_right == from_value)
            return Direction::Right;

    }

};
