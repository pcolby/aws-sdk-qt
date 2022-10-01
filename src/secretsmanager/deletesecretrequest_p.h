// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECRETREQUEST_P_H
#define QTAWS_DELETESECRETREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "deletesecretrequest.h"

namespace QtAws {
namespace SecretsManager {

class DeleteSecretRequest;

class DeleteSecretRequestPrivate : public SecretsManagerRequestPrivate {

public:
    DeleteSecretRequestPrivate(const SecretsManagerRequest::Action action,
                                   DeleteSecretRequest * const q);
    DeleteSecretRequestPrivate(const DeleteSecretRequestPrivate &other,
                                   DeleteSecretRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSecretRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
