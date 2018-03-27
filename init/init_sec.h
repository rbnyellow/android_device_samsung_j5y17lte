#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_J530F = 0,
    VARIANT_J530G,
    VARIANT_J530GM,
    VARIANT_J530FM,
    VARIANT_J530YM,
    VARIANT_J530Y,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant J530F_model = {
    .model = "SM-J530F",
    .codename = "j5y17lte"
};

static const variant J530G_model = {
    .model = "SM-J530G",
    .codename = "j5y17lteub"
};

static const variant J530GM_model = {
    .model = "SM-J530GM",
    .codename = "j5y17lteubm"
};

static const variant J530FM_model = {
    .model = "SM-J530FM",
    .codename = "j5y17lteu"
};

static const variant J530Y_model = {
    .model = "SM-J530Y",
    .codename = "j5y17ltextc"
};

static const variant J530YM_model = {
    .model = "SM-J530YM",
    .codename = "j5y17ltextc"
};

static const variant *all_variants[VARIANT_MAX] = {
    &J530F_model,
    &J530G_model,
    &J530GM_model,
    &J530FM_model,
    &J530YM_model,
    &J530Y_model
};

#endif // INIT_SEC_H
