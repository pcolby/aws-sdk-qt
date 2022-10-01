// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERSNAPSHOTSCHEDULEREQUEST_P_H
#define QTAWS_MODIFYCLUSTERSNAPSHOTSCHEDULEREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyclustersnapshotschedulerequest.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterSnapshotScheduleRequest;

class ModifyClusterSnapshotScheduleRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyClusterSnapshotScheduleRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyClusterSnapshotScheduleRequest * const q);
    ModifyClusterSnapshotScheduleRequestPrivate(const ModifyClusterSnapshotScheduleRequestPrivate &other,
                                   ModifyClusterSnapshotScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClusterSnapshotScheduleRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
