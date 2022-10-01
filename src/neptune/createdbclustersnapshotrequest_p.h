// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERSNAPSHOTREQUEST_P_H
#define QTAWS_CREATEDBCLUSTERSNAPSHOTREQUEST_P_H

#include "neptunerequest_p.h"
#include "createdbclustersnapshotrequest.h"

namespace QtAws {
namespace Neptune {

class CreateDBClusterSnapshotRequest;

class CreateDBClusterSnapshotRequestPrivate : public NeptuneRequestPrivate {

public:
    CreateDBClusterSnapshotRequestPrivate(const NeptuneRequest::Action action,
                                   CreateDBClusterSnapshotRequest * const q);
    CreateDBClusterSnapshotRequestPrivate(const CreateDBClusterSnapshotRequestPrivate &other,
                                   CreateDBClusterSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterSnapshotRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
