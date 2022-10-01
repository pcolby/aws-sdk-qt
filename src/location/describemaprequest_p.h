// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAPREQUEST_P_H
#define QTAWS_DESCRIBEMAPREQUEST_P_H

#include "locationrequest_p.h"
#include "describemaprequest.h"

namespace QtAws {
namespace Location {

class DescribeMapRequest;

class DescribeMapRequestPrivate : public LocationRequestPrivate {

public:
    DescribeMapRequestPrivate(const LocationRequest::Action action,
                                   DescribeMapRequest * const q);
    DescribeMapRequestPrivate(const DescribeMapRequestPrivate &other,
                                   DescribeMapRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMapRequest)

};

} // namespace Location
} // namespace QtAws

#endif
