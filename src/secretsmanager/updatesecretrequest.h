// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECRETREQUEST_H
#define QTAWS_UPDATESECRETREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class UpdateSecretRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT UpdateSecretRequest : public SecretsManagerRequest {

public:
    UpdateSecretRequest(const UpdateSecretRequest &other);
    UpdateSecretRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
