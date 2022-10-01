// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESNAPSHOTREQUEST_P_H
#define QTAWS_DELETESNAPSHOTREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "deletesnapshotrequest.h"

namespace QtAws {
namespace DirectoryService {

class DeleteSnapshotRequest;

class DeleteSnapshotRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DeleteSnapshotRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DeleteSnapshotRequest * const q);
    DeleteSnapshotRequestPrivate(const DeleteSnapshotRequestPrivate &other,
                                   DeleteSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSnapshotRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
