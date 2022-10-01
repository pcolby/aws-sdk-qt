// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECRETVERSIONSTAGEREQUEST_H
#define QTAWS_UPDATESECRETVERSIONSTAGEREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class UpdateSecretVersionStageRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT UpdateSecretVersionStageRequest : public SecretsManagerRequest {

public:
    UpdateSecretVersionStageRequest(const UpdateSecretVersionStageRequest &other);
    UpdateSecretVersionStageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecretVersionStageRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
