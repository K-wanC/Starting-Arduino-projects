Code majored project, simple building and only used INPUT_PULLUP with button.

For code, pressing time detecting is the most important, with response based on different pressing time.

## Press time detecting
Detects when press state changes, and detect after the delay to confirm the press, then change the variable, and record current millisecond value; later when the value changes again, after confirmed, stop recording and return the calculated pressed time.
