// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRACKERREQUEST_P_H
#define QTAWS_DESCRIBETRACKERREQUEST_P_H

#include "locationrequest_p.h"
#include "describetrackerrequest.h"

namespace QtAws {
namespace Location {

class DescribeTrackerRequest;

class DescribeTrackerRequestPrivate : public LocationRequestPrivate {

public:
    DescribeTrackerRequestPrivate(const LocationRequest::Action action,
                                   DescribeTrackerRequest * const q);
    DescribeTrackerRequestPrivate(const DescribeTrackerRequestPrivate &other,
                                   DescribeTrackerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrackerRequest)

};

} // namespace Location
} // namespace QtAws

#endif
