// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECRETREQUEST_P_H
#define QTAWS_UPDATESECRETREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "updatesecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class UpdateSecretRequest;

class UpdateSecretRequestPrivate : public SecretsManagerRequestPrivate {

public:
    UpdateSecretRequestPrivate(const SecretsManagerRequest::Action action,
                                   UpdateSecretRequest * const q);
    UpdateSecretRequestPrivate(const UpdateSecretRequestPrivate &other,
                                   UpdateSecretRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
