// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECRETVERSIONIDSREQUEST_P_H
#define QTAWS_LISTSECRETVERSIONIDSREQUEST_P_H

#include "secretsmanagerrequest_p.h"
#include "listsecretversionidsrequest.h"

namespace QtAws {
namespace SecretsManager {

class ListSecretVersionIdsRequest;

class ListSecretVersionIdsRequestPrivate : public SecretsManagerRequestPrivate {

public:
    ListSecretVersionIdsRequestPrivate(const SecretsManagerRequest::Action action,
                                   ListSecretVersionIdsRequest * const q);
    ListSecretVersionIdsRequestPrivate(const ListSecretVersionIdsRequestPrivate &other,
                                   ListSecretVersionIdsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSecretVersionIdsRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
