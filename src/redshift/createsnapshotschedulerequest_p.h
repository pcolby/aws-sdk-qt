// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTSCHEDULEREQUEST_P_H
#define QTAWS_CREATESNAPSHOTSCHEDULEREQUEST_P_H

#include "redshiftrequest_p.h"
#include "createsnapshotschedulerequest.h"

namespace QtAws {
namespace Redshift {

class CreateSnapshotScheduleRequest;

class CreateSnapshotScheduleRequestPrivate : public RedshiftRequestPrivate {

public:
    CreateSnapshotScheduleRequestPrivate(const RedshiftRequest::Action action,
                                   CreateSnapshotScheduleRequest * const q);
    CreateSnapshotScheduleRequestPrivate(const CreateSnapshotScheduleRequestPrivate &other,
                                   CreateSnapshotScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotScheduleRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
