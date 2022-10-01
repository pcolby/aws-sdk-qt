// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERSNAPSHOTREQUEST_P_H
#define QTAWS_MODIFYCLUSTERSNAPSHOTREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterSnapshotRequest;

class ModifyClusterSnapshotRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyClusterSnapshotRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyClusterSnapshotRequest * const q);
    ModifyClusterSnapshotRequestPrivate(const ModifyClusterSnapshotRequestPrivate &other,
                                   ModifyClusterSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClusterSnapshotRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
