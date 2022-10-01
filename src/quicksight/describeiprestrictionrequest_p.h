// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPRESTRICTIONREQUEST_P_H
#define QTAWS_DESCRIBEIPRESTRICTIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describeiprestrictionrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeIpRestrictionRequest;

class DescribeIpRestrictionRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeIpRestrictionRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeIpRestrictionRequest * const q);
    DescribeIpRestrictionRequestPrivate(const DescribeIpRestrictionRequestPrivate &other,
                                   DescribeIpRestrictionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIpRestrictionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
