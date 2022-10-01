// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDQUERYREQUEST_P_H
#define QTAWS_DELETESCHEDULEDQUERYREQUEST_P_H

#include "timestreamqueryrequest_p.h"
#include "deletescheduledqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class DeleteScheduledQueryRequest;

class DeleteScheduledQueryRequestPrivate : public TimestreamQueryRequestPrivate {

public:
    DeleteScheduledQueryRequestPrivate(const TimestreamQueryRequest::Action action,
                                   DeleteScheduledQueryRequest * const q);
    DeleteScheduledQueryRequestPrivate(const DeleteScheduledQueryRequestPrivate &other,
                                   DeleteScheduledQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteScheduledQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
