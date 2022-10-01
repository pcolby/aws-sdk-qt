// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLICATESECRETTOREGIONSREQUEST_H
#define QTAWS_REPLICATESECRETTOREGIONSREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class ReplicateSecretToRegionsRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT ReplicateSecretToRegionsRequest : public SecretsManagerRequest {

public:
    ReplicateSecretToRegionsRequest(const ReplicateSecretToRegionsRequest &other);
    ReplicateSecretToRegionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplicateSecretToRegionsRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
