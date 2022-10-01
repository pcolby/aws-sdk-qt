// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULEDQUERYREQUEST_P_H
#define QTAWS_UPDATESCHEDULEDQUERYREQUEST_P_H

#include "timestreamqueryrequest_p.h"
#include "updatescheduledqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class UpdateScheduledQueryRequest;

class UpdateScheduledQueryRequestPrivate : public TimestreamQueryRequestPrivate {

public:
    UpdateScheduledQueryRequestPrivate(const TimestreamQueryRequest::Action action,
                                   UpdateScheduledQueryRequest * const q);
    UpdateScheduledQueryRequestPrivate(const UpdateScheduledQueryRequestPrivate &other,
                                   UpdateScheduledQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateScheduledQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
