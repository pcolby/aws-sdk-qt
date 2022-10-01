// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSECRETVALUERESPONSE_P_H
#define QTAWS_GETSECRETVALUERESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class GetSecretValueResponse;

class GetSecretValueResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit GetSecretValueResponsePrivate(GetSecretValueResponse * const q);

    void parseGetSecretValueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSecretValueResponse)
    Q_DISABLE_COPY(GetSecretValueResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
