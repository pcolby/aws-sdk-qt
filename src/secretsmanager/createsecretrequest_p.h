// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECRETREQUEST_P_H
#define QTAWS_CREATESECRETREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "createsecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class CreateSecretRequest;

class CreateSecretRequestPrivate : public SecretsManagerRequestPrivate {

public:
    CreateSecretRequestPrivate(const SecretsManagerRequest::Action action,
                                   CreateSecretRequest * const q);
    CreateSecretRequestPrivate(const CreateSecretRequestPrivate &other,
                                   CreateSecretRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
