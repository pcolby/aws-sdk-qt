// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERFROMSNAPSHOTREQUEST_P_H
#define QTAWS_RESTOREDBCLUSTERFROMSNAPSHOTREQUEST_P_H

#include "neptunerequest_p.h"
#include "restoredbclusterfromsnapshotrequest.h"

namespace QtAws {
namespace Neptune {

class RestoreDBClusterFromSnapshotRequest;

class RestoreDBClusterFromSnapshotRequestPrivate : public NeptuneRequestPrivate {

public:
    RestoreDBClusterFromSnapshotRequestPrivate(const NeptuneRequest::Action action,
                                   RestoreDBClusterFromSnapshotRequest * const q);
    RestoreDBClusterFromSnapshotRequestPrivate(const RestoreDBClusterFromSnapshotRequestPrivate &other,
                                   RestoreDBClusterFromSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreDBClusterFromSnapshotRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
