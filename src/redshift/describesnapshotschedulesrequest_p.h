// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSCHEDULESREQUEST_P_H
#define QTAWS_DESCRIBESNAPSHOTSCHEDULESREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describesnapshotschedulesrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeSnapshotSchedulesRequest;

class DescribeSnapshotSchedulesRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeSnapshotSchedulesRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeSnapshotSchedulesRequest * const q);
    DescribeSnapshotSchedulesRequestPrivate(const DescribeSnapshotSchedulesRequestPrivate &other,
                                   DescribeSnapshotSchedulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotSchedulesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
