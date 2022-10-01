// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGSTATUSREQUEST_P_H
#define QTAWS_DESCRIBELOGGINGSTATUSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeloggingstatusrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeLoggingStatusRequest;

class DescribeLoggingStatusRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeLoggingStatusRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeLoggingStatusRequest * const q);
    DescribeLoggingStatusRequestPrivate(const DescribeLoggingStatusRequestPrivate &other,
                                   DescribeLoggingStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoggingStatusRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
