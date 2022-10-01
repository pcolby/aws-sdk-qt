// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESECRETREQUEST_H
#define QTAWS_RESTORESECRETREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class RestoreSecretRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT RestoreSecretRequest : public SecretsManagerRequest {

public:
    RestoreSecretRequest(const RestoreSecretRequest &other);
    RestoreSecretRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
