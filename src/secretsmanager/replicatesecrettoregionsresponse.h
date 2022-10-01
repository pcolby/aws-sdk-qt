// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLICATESECRETTOREGIONSRESPONSE_H
#define QTAWS_REPLICATESECRETTOREGIONSRESPONSE_H

#include "secretsmanagerresponse.h"
#include "replicatesecrettoregionsrequest.h"

namespace QtAws {
namespace SecretsManager {

class ReplicateSecretToRegionsResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT ReplicateSecretToRegionsResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    ReplicateSecretToRegionsResponse(const ReplicateSecretToRegionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReplicateSecretToRegionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplicateSecretToRegionsResponse)
    Q_DISABLE_COPY(ReplicateSecretToRegionsResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
