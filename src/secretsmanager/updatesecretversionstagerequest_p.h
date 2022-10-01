// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECRETVERSIONSTAGEREQUEST_P_H
#define QTAWS_UPDATESECRETVERSIONSTAGEREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "updatesecretversionstagerequest.h"

namespace QtAws {
namespace SecretsManager {

class UpdateSecretVersionStageRequest;

class UpdateSecretVersionStageRequestPrivate : public SecretsManagerRequestPrivate {

public:
    UpdateSecretVersionStageRequestPrivate(const SecretsManagerRequest::Action action,
                                   UpdateSecretVersionStageRequest * const q);
    UpdateSecretVersionStageRequestPrivate(const UpdateSecretVersionStageRequestPrivate &other,
                                   UpdateSecretVersionStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSecretVersionStageRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
