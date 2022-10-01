// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTSETTINGSREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTSETTINGSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describeaccountsettingsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountSettingsRequest;

class DescribeAccountSettingsRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeAccountSettingsRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeAccountSettingsRequest * const q);
    DescribeAccountSettingsRequestPrivate(const DescribeAccountSettingsRequestPrivate &other,
                                   DescribeAccountSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountSettingsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
