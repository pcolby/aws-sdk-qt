// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECRETRESPONSE_P_H
#define QTAWS_UPDATESECRETRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class UpdateSecretResponse;

class UpdateSecretResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit UpdateSecretResponsePrivate(UpdateSecretResponse * const q);

    void parseUpdateSecretResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSecretResponse)
    Q_DISABLE_COPY(UpdateSecretResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
