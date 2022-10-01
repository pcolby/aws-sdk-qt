// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYSNAPSHOTSREQUEST_P_H
#define QTAWS_DESCRIBERECOVERYSNAPSHOTSREQUEST_P_H

#include "drsrequest_p.h"
#include "describerecoverysnapshotsrequest.h"

namespace QtAws {
namespace Drs {

class DescribeRecoverySnapshotsRequest;

class DescribeRecoverySnapshotsRequestPrivate : public DrsRequestPrivate {

public:
    DescribeRecoverySnapshotsRequestPrivate(const DrsRequest::Action action,
                                   DescribeRecoverySnapshotsRequest * const q);
    DescribeRecoverySnapshotsRequestPrivate(const DescribeRecoverySnapshotsRequestPrivate &other,
                                   DescribeRecoverySnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRecoverySnapshotsRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
