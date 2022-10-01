// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECRETRESPONSE_P_H
#define QTAWS_CREATESECRETRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class CreateSecretResponse;

class CreateSecretResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit CreateSecretResponsePrivate(CreateSecretResponse * const q);

    void parseCreateSecretResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSecretResponse)
    Q_DISABLE_COPY(CreateSecretResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
