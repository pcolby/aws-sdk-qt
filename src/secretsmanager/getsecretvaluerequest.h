// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSECRETVALUEREQUEST_H
#define QTAWS_GETSECRETVALUEREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class GetSecretValueRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT GetSecretValueRequest : public SecretsManagerRequest {

public:
    GetSecretValueRequest(const GetSecretValueRequest &other);
    GetSecretValueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSecretValueRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
