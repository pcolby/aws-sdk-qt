// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSECRETVALUEREQUEST_H
#define QTAWS_PUTSECRETVALUEREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class PutSecretValueRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT PutSecretValueRequest : public SecretsManagerRequest {

public:
    PutSecretValueRequest(const PutSecretValueRequest &other);
    PutSecretValueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSecretValueRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
