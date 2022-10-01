// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATERESOURCEPOLICYREQUEST_P_H
#define QTAWS_VALIDATERESOURCEPOLICYREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "validateresourcepolicyrequest.h"

namespace QtAws {
namespace SecretsManager {

class ValidateResourcePolicyRequest;

class ValidateResourcePolicyRequestPrivate : public SecretsManagerRequestPrivate {

public:
    ValidateResourcePolicyRequestPrivate(const SecretsManagerRequest::Action action,
                                   ValidateResourcePolicyRequest * const q);
    ValidateResourcePolicyRequestPrivate(const ValidateResourcePolicyRequestPrivate &other,
                                   ValidateResourcePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ValidateResourcePolicyRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
