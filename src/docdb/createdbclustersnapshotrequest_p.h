// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERSNAPSHOTREQUEST_P_H
#define QTAWS_CREATEDBCLUSTERSNAPSHOTREQUEST_P_H

#include "docdbrequest_p.h"
#include "createdbclustersnapshotrequest.h"

namespace QtAws {
namespace DocDb {

class CreateDBClusterSnapshotRequest;

class CreateDBClusterSnapshotRequestPrivate : public DocDbRequestPrivate {

public:
    CreateDBClusterSnapshotRequestPrivate(const DocDbRequest::Action action,
                                   CreateDBClusterSnapshotRequest * const q);
    CreateDBClusterSnapshotRequestPrivate(const CreateDBClusterSnapshotRequestPrivate &other,
                                   CreateDBClusterSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterSnapshotRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
