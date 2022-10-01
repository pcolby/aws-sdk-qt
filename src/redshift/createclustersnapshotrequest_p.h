// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSNAPSHOTREQUEST_P_H
#define QTAWS_CREATECLUSTERSNAPSHOTREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSnapshotRequest;

class CreateClusterSnapshotRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateClusterSnapshotRequestPrivate(const RedshiftRequest::Action action,
                                   CreateClusterSnapshotRequest * const q);
    CreateClusterSnapshotRequestPrivate(const CreateClusterSnapshotRequestPrivate &other,
                                   CreateClusterSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClusterSnapshotRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
