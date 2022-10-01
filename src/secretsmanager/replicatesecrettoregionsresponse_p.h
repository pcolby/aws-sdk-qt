// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLICATESECRETTOREGIONSRESPONSE_P_H
#define QTAWS_REPLICATESECRETTOREGIONSRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class ReplicateSecretToRegionsResponse;

class ReplicateSecretToRegionsResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit ReplicateSecretToRegionsResponsePrivate(ReplicateSecretToRegionsResponse * const q);

    void parseReplicateSecretToRegionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReplicateSecretToRegionsResponse)
    Q_DISABLE_COPY(ReplicateSecretToRegionsResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
