// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTKEYSREQUEST_P_H
#define QTAWS_LISTHOSTKEYSREQUEST_P_H

#include "transferrequest_p.h"
#include "listhostkeysrequest.h"

namespace QtAws {
namespace Transfer {

class ListHostKeysRequest;

class ListHostKeysRequestPrivate : public TransferRequestPrivate {

public:
    ListHostKeysRequestPrivate(const TransferRequest::Action action,
                                   ListHostKeysRequest * const q);
    ListHostKeysRequestPrivate(const ListHostKeysRequestPrivate &other,
                                   ListHostKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHostKeysRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
