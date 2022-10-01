// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSKEYSREQUEST_P_H
#define QTAWS_LISTACCESSKEYSREQUEST_P_H

#include "iamrequest_p.h"
#include "listaccesskeysrequest.h"

namespace QtAws {
namespace Iam {

class ListAccessKeysRequest;

class ListAccessKeysRequestPrivate : public IamRequestPrivate {

public:
    ListAccessKeysRequestPrivate(const IamRequest::Action action,
                                   ListAccessKeysRequest * const q);
    ListAccessKeysRequestPrivate(const ListAccessKeysRequestPrivate &other,
                                   ListAccessKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccessKeysRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
