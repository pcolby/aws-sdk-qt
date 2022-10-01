// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSECRETVALUERESPONSE_P_H
#define QTAWS_PUTSECRETVALUERESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class PutSecretValueResponse;

class PutSecretValueResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit PutSecretValueResponsePrivate(PutSecretValueResponse * const q);

    void parsePutSecretValueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutSecretValueResponse)
    Q_DISABLE_COPY(PutSecretValueResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
