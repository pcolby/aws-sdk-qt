// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATEREQUEST_P_H
#define QTAWS_DESCRIBETEMPLATEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describetemplaterequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplateRequest;

class DescribeTemplateRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeTemplateRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeTemplateRequest * const q);
    DescribeTemplateRequestPrivate(const DescribeTemplateRequestPrivate &other,
                                   DescribeTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTemplateRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
