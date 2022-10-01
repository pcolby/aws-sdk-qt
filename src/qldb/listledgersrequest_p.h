// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLEDGERSREQUEST_P_H
#define QTAWS_LISTLEDGERSREQUEST_P_H

#include "qldbrequest_p.h"
#include "listledgersrequest.h"

namespace QtAws {
namespace Qldb {

class ListLedgersRequest;

class ListLedgersRequestPrivate : public QldbRequestPrivate {

public:
    ListLedgersRequestPrivate(const QldbRequest::Action action,
                                   ListLedgersRequest * const q);
    ListLedgersRequestPrivate(const ListLedgersRequestPrivate &other,
                                   ListLedgersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLedgersRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
