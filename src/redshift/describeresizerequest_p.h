// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESIZEREQUEST_P_H
#define QTAWS_DESCRIBERESIZEREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeresizerequest.h"

namespace QtAws {
namespace Redshift {

class DescribeResizeRequest;

class DescribeResizeRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeResizeRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeResizeRequest * const q);
    DescribeResizeRequestPrivate(const DescribeResizeRequestPrivate &other,
                                   DescribeResizeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeResizeRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
