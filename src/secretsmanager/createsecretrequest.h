// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECRETREQUEST_H
#define QTAWS_CREATESECRETREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class CreateSecretRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT CreateSecretRequest : public SecretsManagerRequest {

public:
    CreateSecretRequest(const CreateSecretRequest &other);
    CreateSecretRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
