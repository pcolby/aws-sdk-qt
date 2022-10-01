// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTCUSTOMIZATIONREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTCUSTOMIZATIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describeaccountcustomizationrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountCustomizationRequest;

class DescribeAccountCustomizationRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeAccountCustomizationRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeAccountCustomizationRequest * const q);
    DescribeAccountCustomizationRequestPrivate(const DescribeAccountCustomizationRequestPrivate &other,
                                   DescribeAccountCustomizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountCustomizationRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
