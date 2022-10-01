// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSECRETVALUEREQUEST_P_H
#define QTAWS_PUTSECRETVALUEREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "putsecretvaluerequest.h"

namespace QtAws {
namespace SecretsManager {

class PutSecretValueRequest;

class PutSecretValueRequestPrivate : public SecretsManagerRequestPrivate {

public:
    PutSecretValueRequestPrivate(const SecretsManagerRequest::Action action,
                                   PutSecretValueRequest * const q);
    PutSecretValueRequestPrivate(const PutSecretValueRequestPrivate &other,
                                   PutSecretValueRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSecretValueRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
