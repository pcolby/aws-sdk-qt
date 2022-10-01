// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISKSNAPSHOTREQUEST_P_H
#define QTAWS_DELETEDISKSNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deletedisksnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteDiskSnapshotRequest;

class DeleteDiskSnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteDiskSnapshotRequestPrivate(const LightsailRequest::Action action,
                                   DeleteDiskSnapshotRequest * const q);
    DeleteDiskSnapshotRequestPrivate(const DeleteDiskSnapshotRequestPrivate &other,
                                   DeleteDiskSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDiskSnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
