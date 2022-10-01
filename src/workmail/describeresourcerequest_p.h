// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEREQUEST_P_H
#define QTAWS_DESCRIBERESOURCEREQUEST_P_H

#include "workmailrequest_p.h"
#include "describeresourcerequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeResourceRequest;

class DescribeResourceRequestPrivate : public WorkMailRequestPrivate {

public:
    DescribeResourceRequestPrivate(const WorkMailRequest::Action action,
                                   DescribeResourceRequest * const q);
    DescribeResourceRequestPrivate(const DescribeResourceRequestPrivate &other,
                                   DescribeResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeResourceRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
