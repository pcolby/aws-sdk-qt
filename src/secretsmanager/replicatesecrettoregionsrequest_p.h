// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLICATESECRETTOREGIONSREQUEST_P_H
#define QTAWS_REPLICATESECRETTOREGIONSREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "replicatesecrettoregionsrequest.h"

namespace QtAws {
namespace SecretsManager {

class ReplicateSecretToRegionsRequest;

class ReplicateSecretToRegionsRequestPrivate : public SecretsManagerRequestPrivate {

public:
    ReplicateSecretToRegionsRequestPrivate(const SecretsManagerRequest::Action action,
                                   ReplicateSecretToRegionsRequest * const q);
    ReplicateSecretToRegionsRequestPrivate(const ReplicateSecretToRegionsRequestPrivate &other,
                                   ReplicateSecretToRegionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReplicateSecretToRegionsRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
