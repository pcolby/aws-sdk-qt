// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERFROMSNAPSHOTREQUEST_P_H
#define QTAWS_RESTOREDBCLUSTERFROMSNAPSHOTREQUEST_P_H

#include "docdbrequest_p.h"
#include "restoredbclusterfromsnapshotrequest.h"

namespace QtAws {
namespace DocDb {

class RestoreDBClusterFromSnapshotRequest;

class RestoreDBClusterFromSnapshotRequestPrivate : public DocDbRequestPrivate {

public:
    RestoreDBClusterFromSnapshotRequestPrivate(const DocDbRequest::Action action,
                                   RestoreDBClusterFromSnapshotRequest * const q);
    RestoreDBClusterFromSnapshotRequestPrivate(const RestoreDBClusterFromSnapshotRequestPrivate &other,
                                   RestoreDBClusterFromSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreDBClusterFromSnapshotRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
