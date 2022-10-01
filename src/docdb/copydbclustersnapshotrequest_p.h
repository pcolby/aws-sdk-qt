// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERSNAPSHOTREQUEST_P_H
#define QTAWS_COPYDBCLUSTERSNAPSHOTREQUEST_P_H

#include "docdbrequest_p.h"
#include "copydbclustersnapshotrequest.h"

namespace QtAws {
namespace DocDb {

class CopyDBClusterSnapshotRequest;

class CopyDBClusterSnapshotRequestPrivate : public DocDbRequestPrivate {

public:
    CopyDBClusterSnapshotRequestPrivate(const DocDbRequest::Action action,
                                   CopyDBClusterSnapshotRequest * const q);
    CopyDBClusterSnapshotRequestPrivate(const CopyDBClusterSnapshotRequestPrivate &other,
                                   CopyDBClusterSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyDBClusterSnapshotRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
