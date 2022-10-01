// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDQUERYREQUEST_P_H
#define QTAWS_CREATESCHEDULEDQUERYREQUEST_P_H

#include "timestreamqueryrequest_p.h"
#include "createscheduledqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class CreateScheduledQueryRequest;

class CreateScheduledQueryRequestPrivate : public TimestreamQueryRequestPrivate {

public:
    CreateScheduledQueryRequestPrivate(const TimestreamQueryRequest::Action action,
                                   CreateScheduledQueryRequest * const q);
    CreateScheduledQueryRequestPrivate(const CreateScheduledQueryRequestPrivate &other,
                                   CreateScheduledQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateScheduledQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
