// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYKEYSREQUEST_P_H
#define QTAWS_LISTSECURITYKEYSREQUEST_P_H

#include "connectrequest_p.h"
#include "listsecuritykeysrequest.h"

namespace QtAws {
namespace Connect {

class ListSecurityKeysRequest;

class ListSecurityKeysRequestPrivate : public ConnectRequestPrivate {

public:
    ListSecurityKeysRequestPrivate(const ConnectRequest::Action action,
                                   ListSecurityKeysRequest * const q);
    ListSecurityKeysRequestPrivate(const ListSecurityKeysRequestPrivate &other,
                                   ListSecurityKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSecurityKeysRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
