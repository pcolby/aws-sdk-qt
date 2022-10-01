// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSNAPSHOTREQUEST_P_H
#define QTAWS_DELETEDBSNAPSHOTREQUEST_P_H

#include "rdsrequest_p.h"
#include "deletedbsnapshotrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBSnapshotRequest;

class DeleteDBSnapshotRequestPrivate : public RdsRequestPrivate {

public:
    DeleteDBSnapshotRequestPrivate(const RdsRequest::Action action,
                                   DeleteDBSnapshotRequest * const q);
    DeleteDBSnapshotRequestPrivate(const DeleteDBSnapshotRequestPrivate &other,
                                   DeleteDBSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
