// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREFROMSNAPSHOTREQUEST_P_H
#define QTAWS_RESTOREFROMSNAPSHOTREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "restorefromsnapshotrequest.h"

namespace QtAws {
namespace DirectoryService {

class RestoreFromSnapshotRequest;

class RestoreFromSnapshotRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    RestoreFromSnapshotRequestPrivate(const DirectoryServiceRequest::Action action,
                                   RestoreFromSnapshotRequest * const q);
    RestoreFromSnapshotRequestPrivate(const RestoreFromSnapshotRequestPrivate &other,
                                   RestoreFromSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreFromSnapshotRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
