// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEREQUEST_P_H
#define QTAWS_DESCRIBESCHEDULEREQUEST_P_H

#include "databrewrequest_p.h"
#include "describeschedulerequest.h"

namespace QtAws {
namespace DataBrew {

class DescribeScheduleRequest;

class DescribeScheduleRequestPrivate : public DataBrewRequestPrivate {

public:
    DescribeScheduleRequestPrivate(const DataBrewRequest::Action action,
                                   DescribeScheduleRequest * const q);
    DescribeScheduleRequestPrivate(const DescribeScheduleRequestPrivate &other,
                                   DescribeScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScheduleRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
