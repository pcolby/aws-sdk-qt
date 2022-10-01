// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTCOPYGRANTSREQUEST_P_H
#define QTAWS_DESCRIBESNAPSHOTCOPYGRANTSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describesnapshotcopygrantsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeSnapshotCopyGrantsRequest;

class DescribeSnapshotCopyGrantsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeSnapshotCopyGrantsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeSnapshotCopyGrantsRequest * const q);
    DescribeSnapshotCopyGrantsRequestPrivate(const DescribeSnapshotCopyGrantsRequestPrivate &other,
                                   DescribeSnapshotCopyGrantsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotCopyGrantsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
