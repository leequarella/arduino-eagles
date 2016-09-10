const int dot_length = 100;
const int dash_length = 300;
const int pause_between_elements = dot_length;
const int pause_between_characters = dot_length * 3;
const int pause_between_words = dot_length * 7;

void morse_dot() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dot_length);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(pause_between_elements);
}

void morse_dash() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dash_length);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(pause_between_elements);
}

void morse_a() {
  morse_dot();
  morse_dash();
  delay(pause_between_characters);
}

void morse_b() {
  morse_dash();
  morse_dot();
  morse_dot();
  morse_dot();
  delay(pause_between_characters);
}

void morse_c() {
  morse_dash();
  morse_dot();
  morse_dash();
  morse_dot();
  delay(pause_between_characters);
}

void morse_d() {
  morse_dash();
  morse_dot();
  morse_dot();
  delay(pause_between_characters);
}

void morse_e() {
  morse_dot();
  delay(pause_between_characters);
}

void morse_f() {
  morse_dot();
  morse_dot();
  morse_dash();
  morse_dot();
  delay(pause_between_characters);
}

void morse_g() {
  morse_dash();
  morse_dot();
  morse_dot();
  delay(pause_between_characters);
}

void morse_h() {
  morse_dot();
  morse_dot();
  morse_dot();
  morse_dot();
  delay(pause_between_characters);
}

void morse_i() {
  morse_dot();
  morse_dot();
  delay(pause_between_characters);
}

void morse_j() {
  morse_dot();
  morse_dash();
  morse_dash();
  morse_dash();
  delay(pause_between_characters);
}

void morse_k() {
  morse_dash();
  morse_dot();
  morse_dash();
  delay(pause_between_characters);
}

void morse_l() {
  morse_dot();
  morse_dash();
  morse_dot();
  morse_dot();
  delay(pause_between_characters);
}

void morse_m() {
  morse_dash();
  morse_dash();
  delay(pause_between_characters);
}

void morse_n() {
  morse_dash();
  morse_dot();
  delay(pause_between_characters);
}

void morse_o() {
  morse_dash();
  morse_dash();
  morse_dash();
  delay(pause_between_characters);
}

void morse_p() {
  morse_dot();
  morse_dash();
  morse_dash();
  morse_dot();
  delay(pause_between_characters);
}

void morse_q() {
  morse_dash();
  morse_dash();
  morse_dot();
  morse_dash();
  delay(pause_between_characters);
}

void morse_r() {
  morse_dot();
  morse_dash();
  morse_dot();
  delay(pause_between_characters);
}

void morse_s() {
  morse_dot();
  morse_dot();
  morse_dot();
  delay(pause_between_characters);
}

void morse_t() {
  morse_dash();
  delay(pause_between_characters);
}

void morse_u() {
  morse_dot();
  morse_dot();
  morse_dash();
  delay(pause_between_characters);
}

void morse_v() {
  morse_dot();
  morse_dot();
  morse_dot();
  morse_dash();
  delay(pause_between_characters);
}

void morse_w() {
  morse_dot();
  morse_dash();
  morse_dash();
  delay(pause_between_characters);
}

void morse_x() {
  morse_dash();
  morse_dot();
  morse_dot();
  morse_dash();
  delay(pause_between_characters);
}

void morse_y() {
  morse_dash();
  morse_dot();
  morse_dash();
  morse_dash();
  delay(pause_between_characters);
}

void morse_z() {
  morse_dash();
  morse_dash();
  morse_dot();
  morse_dot();
  delay(pause_between_characters);
}

void morse_1() {
  morse_dot();
  morse_dash();
  morse_dash();
  morse_dash();
  morse_dash();
  delay(pause_between_characters);
}

void morse_2() {
  morse_dot();
  morse_dot();
  morse_dash();
  morse_dash();
  morse_dash();
  delay(pause_between_characters);
}

void morse_3() {
  morse_dot();
  morse_dot();
  morse_dot();
  morse_dash();
  morse_dash();
  delay(pause_between_characters);
}

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  fight();
}

void fight() {
  morse_f();
  morse_l();
  morse_y();
  delay(pause_between_words);
  morse_e();
  morse_a();
  morse_g();
  morse_l();
  morse_e();
  morse_s();
  delay(pause_between_words);
  morse_f();
  morse_l();
  morse_y();
  delay(pause_between_words);

  morse_o();
  morse_n()
  delay(pause_between_words);
  morse_t();
  morse_h();
  morse_e();
  delay(pause_between_words);
  morse_r();
  morse_o();
  morse_a();
  morse_d();
  delay(pause_between_words);
  morse_t();
  morse_o();
  delay(pause_between_words);
  morse_v();
  morse_i();
  morse_c();
  morse_t();
  morse_o();
  morse_r();
  morse_y();
  delay(pause_between_words);

  morse_f();
  morse_l();
  morse_y();
  delay(pause_between_words);
  morse_e();
  morse_a();
  morse_g();
  morse_l();
  morse_e();
  morse_s();
  delay(pause_between_words);
  morse_f();
  morse_l();
  morse_y();
  delay(pause_between_words);

  morse_s();
  morse_c();
  morse_o();
  morse_r();
  morse_e();
  delay(pause_between_words);
  morse_a();
  delay(pause_between_words);
  morse_t();
  morse_o();
  morse_u();
  morse_c();
  morse_h();
  morse_d();
  morse_o();
  morse_w();
  morse_n();
  delay(pause_between_words);

  morse_1();
  delay(pause_between_words);
  morse_2();
  delay(pause_between_words);
  morse_3();
  delay(pause_between_words);

  morse_h();
  morse_i();
  morse_t();
  delay(pause_between_words);
  morse_e();
  morse_m();
  delay(pause_between_words);
  morse_l();
  morse_o();
  morse_w();
  delay(pause_between_words);

  morse_h();
  morse_i();
  morse_t();
  delay(pause_between_words);
  morse_e();
  morse_m();
  delay(pause_between_words);
  morse_h();
  morse_i();
  delay(pause_between_words);

  morse_a();
  morse_n();
  morse_d();
  delay(pause_between_words);
  morse_w();
  morse_a();
  morse_t();
  morse_c();
  morse_h();
  delay(pause_between_words);
  morse_o();
  morse_u();
  morse_r();
  delay(pause_between_words);
  morse_e();
  morse_a();
  morse_g();
  morse_l();
  morse_e();
  morse_s();
  delay(pause_between_words);
  morse_f();
  morse_l();
  morse_y();
  delay(pause_between_words);

  morse_f();
  morse_l();
  morse_y();
  delay(pause_between_words);
  morse_e();
  morse_a();
  morse_g();
  morse_l();
  morse_e();
  morse_s();
  delay(pause_between_words);
  morse_f();
  morse_l();
  morse_y();
  delay(pause_between_words);

  morse_o();
  morse_n()
  delay(pause_between_words);
  morse_t();
  morse_h();
  morse_e();
  delay(pause_between_words);
  morse_r();
  morse_o();
  morse_a();
  morse_d();
  delay(pause_between_words);
  morse_t();
  morse_o();
  delay(pause_between_words);
  morse_v();
  morse_i();
  morse_c();
  morse_t();
  morse_o();
  morse_r();
  morse_y();
  delay(pause_between_words);

  morse_e();
  morse_a();
  morse_g();
  morse_l();
  morse_e();
  morse_s();
  delay(pause_between_words);

  morse_e();
  morse_a();
  morse_g();
  morse_l();
  morse_e();
  morse_s();
  delay(pause_between_words);
}
