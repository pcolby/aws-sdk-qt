// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEREQUEST_P_H
#define QTAWS_DESCRIBESCHEDULEREQUEST_P_H

#include "medialiverequest_p.h"
#include "describeschedulerequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeScheduleRequest;

class DescribeScheduleRequestPrivate : public MediaLiveRequestPrivate {

public:
    DescribeScheduleRequestPrivate(const MediaLiveRequest::Action action,
                                   DescribeScheduleRequest * const q);
    DescribeScheduleRequestPrivate(const DescribeScheduleRequestPrivate &other,
                                   DescribeScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScheduleRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
