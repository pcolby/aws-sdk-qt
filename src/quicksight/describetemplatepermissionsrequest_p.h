// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATEPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBETEMPLATEPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describetemplatepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplatePermissionsRequest;

class DescribeTemplatePermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeTemplatePermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeTemplatePermissionsRequest * const q);
    DescribeTemplatePermissionsRequestPrivate(const DescribeTemplatePermissionsRequestPrivate &other,
                                   DescribeTemplatePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTemplatePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
