// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHEMEALIASREQUEST_P_H
#define QTAWS_DESCRIBETHEMEALIASREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describethemealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeThemeAliasRequest;

class DescribeThemeAliasRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeThemeAliasRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeThemeAliasRequest * const q);
    DescribeThemeAliasRequestPrivate(const DescribeThemeAliasRequestPrivate &other,
                                   DescribeThemeAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeThemeAliasRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
