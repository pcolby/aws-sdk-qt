// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBSNAPSHOTREQUEST_P_H
#define QTAWS_COPYDBSNAPSHOTREQUEST_P_H

#include "rdsrequest_p.h"
#include "copydbsnapshotrequest.h"

namespace QtAws {
namespace Rds {

class CopyDBSnapshotRequest;

class CopyDBSnapshotRequestPrivate : public RdsRequestPrivate {

public:
    CopyDBSnapshotRequestPrivate(const RdsRequest::Action action,
                                   CopyDBSnapshotRequest * const q);
    CopyDBSnapshotRequestPrivate(const CopyDBSnapshotRequestPrivate &other,
                                   CopyDBSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyDBSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
