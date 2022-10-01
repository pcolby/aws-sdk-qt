// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERSREQUEST_P_H
#define QTAWS_LISTSERVERSREQUEST_P_H

#include "transferrequest_p.h"
#include "listserversrequest.h"

namespace QtAws {
namespace Transfer {

class ListServersRequest;

class ListServersRequestPrivate : public TransferRequestPrivate {

public:
    ListServersRequestPrivate(const TransferRequest::Action action,
                                   ListServersRequest * const q);
    ListServersRequestPrivate(const ListServersRequestPrivate &other,
                                   ListServersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServersRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
