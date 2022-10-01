// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHEMEREQUEST_P_H
#define QTAWS_DESCRIBETHEMEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describethemerequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeThemeRequest;

class DescribeThemeRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeThemeRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeThemeRequest * const q);
    DescribeThemeRequestPrivate(const DescribeThemeRequestPrivate &other,
                                   DescribeThemeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeThemeRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
