// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESECRETREQUEST_P_H
#define QTAWS_RESTORESECRETREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "restoresecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class RestoreSecretRequest;

class RestoreSecretRequestPrivate : public SecretsManagerRequestPrivate {

public:
    RestoreSecretRequestPrivate(const SecretsManagerRequest::Action action,
                                   RestoreSecretRequest * const q);
    RestoreSecretRequestPrivate(const RestoreSecretRequestPrivate &other,
                                   RestoreSecretRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
