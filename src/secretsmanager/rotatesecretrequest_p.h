// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATESECRETREQUEST_P_H
#define QTAWS_ROTATESECRETREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "rotatesecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class RotateSecretRequest;

class RotateSecretRequestPrivate : public SecretsManagerRequestPrivate {

public:
    RotateSecretRequestPrivate(const SecretsManagerRequest::Action action,
                                   RotateSecretRequest * const q);
    RotateSecretRequestPrivate(const RotateSecretRequestPrivate &other,
                                   RotateSecretRequest * const q);

private:
    Q_DECLARE_PUBLIC(RotateSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
