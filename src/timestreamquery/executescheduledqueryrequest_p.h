// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESCHEDULEDQUERYREQUEST_P_H
#define QTAWS_EXECUTESCHEDULEDQUERYREQUEST_P_H

#include "timestreamqueryrequest_p.h"
#include "executescheduledqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class ExecuteScheduledQueryRequest;

class ExecuteScheduledQueryRequestPrivate : public TimestreamQueryRequestPrivate {

public:
    ExecuteScheduledQueryRequestPrivate(const TimestreamQueryRequest::Action action,
                                   ExecuteScheduledQueryRequest * const q);
    ExecuteScheduledQueryRequestPrivate(const ExecuteScheduledQueryRequestPrivate &other,
                                   ExecuteScheduledQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteScheduledQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
