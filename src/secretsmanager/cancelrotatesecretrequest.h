// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELROTATESECRETREQUEST_H
#define QTAWS_CANCELROTATESECRETREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class CancelRotateSecretRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT CancelRotateSecretRequest : public SecretsManagerRequest {

public:
    CancelRotateSecretRequest(const CancelRotateSecretRequest &other);
    CancelRotateSecretRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelRotateSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
