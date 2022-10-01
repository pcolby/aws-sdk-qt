// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULEDQUERIESREQUEST_P_H
#define QTAWS_LISTSCHEDULEDQUERIESREQUEST_P_H

#include "timestreamqueryrequest_p.h"
#include "listscheduledqueriesrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class ListScheduledQueriesRequest;

class ListScheduledQueriesRequestPrivate : public TimestreamQueryRequestPrivate {

public:
    ListScheduledQueriesRequestPrivate(const TimestreamQueryRequest::Action action,
                                   ListScheduledQueriesRequest * const q);
    ListScheduledQueriesRequestPrivate(const ListScheduledQueriesRequestPrivate &other,
                                   ListScheduledQueriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListScheduledQueriesRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
