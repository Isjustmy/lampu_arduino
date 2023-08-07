// Deklarasi pin untuk setiap kelompok lampu
int lampuMerahKelompok1 = 12;
int lampuKuningKelompok1 = 11;
int lampuHijauKelompok1 = 10;

int lampuMerahKelompok2 = 8;
int lampuKuningKelompok2 = 7;
int lampuHijauKelompok2 = 6;

int lampuMerahKelompok3 = 4;
int lampuKuningKelompok3 = 3;
int lampuHijauKelompok3 = 2;

void setup() {
  // Inisialisasi pin sebagai OUTPUT
  pinMode(lampuMerahKelompok1, OUTPUT);
  pinMode(lampuKuningKelompok1, OUTPUT);
  pinMode(lampuHijauKelompok1, OUTPUT);

  pinMode(lampuMerahKelompok2, OUTPUT);
  pinMode(lampuKuningKelompok2, OUTPUT);
  pinMode(lampuHijauKelompok2, OUTPUT);

  pinMode(lampuMerahKelompok3, OUTPUT);
  pinMode(lampuKuningKelompok3, OUTPUT);
  pinMode(lampuHijauKelompok3, OUTPUT);
}

void loop() {
  // Urutan skenario berdasarkan permintaan Anda

  // Skenario 1
  digitalWrite(lampuHijauKelompok1, HIGH);
  digitalWrite(lampuMerahKelompok2, HIGH);
  digitalWrite(lampuMerahKelompok3, HIGH);
  delay(3000);

  // Skenario 2
  digitalWrite(lampuMerahKelompok1, LOW);
  digitalWrite(lampuKuningKelompok1, HIGH);
  digitalWrite(lampuHijauKelompok1, HIGH);
  digitalWrite(lampuMerahKelompok2, HIGH);
  digitalWrite(lampuKuningKelompok2, HIGH);
  digitalWrite(lampuMerahKelompok3, HIGH);
  digitalWrite(lampuKuningKelompok3, LOW);
  digitalWrite(lampuHijauKelompok3, LOW);
  delay(1000);

  // Skenario 3
  digitalWrite(lampuMerahKelompok1, HIGH);
  digitalWrite(lampuKuningKelompok1, LOW);
  digitalWrite(lampuHijauKelompok1, LOW);
  digitalWrite(lampuMerahKelompok2, LOW);
  digitalWrite(lampuKuningKelompok2, LOW);
  digitalWrite(lampuHijauKelompok2, HIGH);
  digitalWrite(lampuMerahKelompok3, HIGH);
  digitalWrite(lampuKuningKelompok3, LOW);
  digitalWrite(lampuHijauKelompok3, LOW);
  delay(3000);

  // Skenario 4
  digitalWrite(lampuMerahKelompok1, HIGH);
  digitalWrite(lampuKuningKelompok1, LOW);
  digitalWrite(lampuHijauKelompok1, LOW);
  digitalWrite(lampuMerahKelompok2, LOW);
  digitalWrite(lampuKuningKelompok2, HIGH);
  digitalWrite(lampuHijauKelompok2, HIGH);
  digitalWrite(lampuMerahKelompok3, HIGH);
  digitalWrite(lampuKuningKelompok3, HIGH);
  digitalWrite(lampuHijauKelompok3, LOW);
  delay(1000);

  // Skenario 5
  digitalWrite(lampuMerahKelompok1, HIGH);
  digitalWrite(lampuKuningKelompok1, LOW);
  digitalWrite(lampuHijauKelompok1, LOW);
  digitalWrite(lampuMerahKelompok2, HIGH);
  digitalWrite(lampuKuningKelompok2, LOW);
  digitalWrite(lampuHijauKelompok2, LOW);
  digitalWrite(lampuMerahKelompok3, LOW);
  digitalWrite(lampuKuningKelompok3, LOW);
  digitalWrite(lampuHijauKelompok3, HIGH);
  delay(3000);

  // Skenario 6
  digitalWrite(lampuMerahKelompok1, HIGH);
  digitalWrite(lampuKuningKelompok1, HIGH);
  digitalWrite(lampuHijauKelompok1, LOW);
  digitalWrite(lampuMerahKelompok2, HIGH);
  digitalWrite(lampuKuningKelompok2, LOW);
  digitalWrite(lampuHijauKelompok2, LOW);
  digitalWrite(lampuMerahKelompok3, LOW);
  digitalWrite(lampuKuningKelompok3, HIGH);
  digitalWrite(lampuHijauKelompok3, HIGH);
  delay(1000);

  // Skenario 7
  digitalWrite(lampuMerahKelompok1, LOW);
  digitalWrite(lampuKuningKelompok1, LOW);
  digitalWrite(lampuHijauKelompok1, HIGH);
  digitalWrite(lampuMerahKelompok2, HIGH);
  digitalWrite(lampuKuningKelompok2, LOW);
  digitalWrite(lampuHijauKelompok2, LOW);
  digitalWrite(lampuMerahKelompok3, HIGH);
  digitalWrite(lampuKuningKelompok3, LOW);
  digitalWrite(lampuHijauKelompok3, LOW);
  delay(3000);
}
