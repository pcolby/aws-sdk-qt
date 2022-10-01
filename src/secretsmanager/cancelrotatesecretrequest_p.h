// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELROTATESECRETREQUEST_P_H
#define QTAWS_CANCELROTATESECRETREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "cancelrotatesecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class CancelRotateSecretRequest;

class CancelRotateSecretRequestPrivate : public SecretsManagerRequestPrivate {

public:
    CancelRotateSecretRequestPrivate(const SecretsManagerRequest::Action action,
                                   CancelRotateSecretRequest * const q);
    CancelRotateSecretRequestPrivate(const CancelRotateSecretRequestPrivate &other,
                                   CancelRotateSecretRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelRotateSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
