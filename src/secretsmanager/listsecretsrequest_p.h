// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECRETSREQUEST_P_H
#define QTAWS_LISTSECRETSREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "listsecretsrequest.h"

namespace QtAws {
namespace SecretsManager {

class ListSecretsRequest;

class ListSecretsRequestPrivate : public SecretsManagerRequestPrivate {

public:
    ListSecretsRequestPrivate(const SecretsManagerRequest::Action action,
                                   ListSecretsRequest * const q);
    ListSecretsRequestPrivate(const ListSecretsRequestPrivate &other,
                                   ListSecretsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSecretsRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
