// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLERESTORESTATUSREQUEST_P_H
#define QTAWS_DESCRIBETABLERESTORESTATUSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describetablerestorestatusrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeTableRestoreStatusRequest;

class DescribeTableRestoreStatusRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeTableRestoreStatusRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeTableRestoreStatusRequest * const q);
    DescribeTableRestoreStatusRequestPrivate(const DescribeTableRestoreStatusRequestPrivate &other,
                                   DescribeTableRestoreStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTableRestoreStatusRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
