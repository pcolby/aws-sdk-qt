// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATESECRETREQUEST_H
#define QTAWS_ROTATESECRETREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class RotateSecretRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT RotateSecretRequest : public SecretsManagerRequest {

public:
    RotateSecretRequest(const RotateSecretRequest &other);
    RotateSecretRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RotateSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
