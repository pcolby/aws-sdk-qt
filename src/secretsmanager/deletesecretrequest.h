// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECRETREQUEST_H
#define QTAWS_DELETESECRETREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class DeleteSecretRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT DeleteSecretRequest : public SecretsManagerRequest {

public:
    DeleteSecretRequest(const DeleteSecretRequest &other);
    DeleteSecretRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
