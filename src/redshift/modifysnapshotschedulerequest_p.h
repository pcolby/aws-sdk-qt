// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTSCHEDULEREQUEST_P_H
#define QTAWS_MODIFYSNAPSHOTSCHEDULEREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifysnapshotschedulerequest.h"

namespace QtAws {
namespace Redshift {

class ModifySnapshotScheduleRequest;

class ModifySnapshotScheduleRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifySnapshotScheduleRequestPrivate(const RedshiftRequest::Action action,
                                   ModifySnapshotScheduleRequest * const q);
    ModifySnapshotScheduleRequestPrivate(const ModifySnapshotScheduleRequestPrivate &other,
                                   ModifySnapshotScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifySnapshotScheduleRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
