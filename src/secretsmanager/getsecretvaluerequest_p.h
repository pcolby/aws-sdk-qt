// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSECRETVALUEREQUEST_P_H
#define QTAWS_GETSECRETVALUEREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "getsecretvaluerequest.h"

namespace QtAws {
namespace SecretsManager {

class GetSecretValueRequest;

class GetSecretValueRequestPrivate : public SecretsManagerRequestPrivate {

public:
    GetSecretValueRequestPrivate(const SecretsManagerRequest::Action action,
                                   GetSecretValueRequest * const q);
    GetSecretValueRequestPrivate(const GetSecretValueRequestPrivate &other,
                                   GetSecretValueRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSecretValueRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
