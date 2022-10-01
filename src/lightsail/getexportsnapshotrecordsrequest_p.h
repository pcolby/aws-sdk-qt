// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTSNAPSHOTRECORDSREQUEST_P_H
#define QTAWS_GETEXPORTSNAPSHOTRECORDSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getexportsnapshotrecordsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetExportSnapshotRecordsRequest;

class GetExportSnapshotRecordsRequestPrivate : public LightsailRequestPrivate {

public:
    GetExportSnapshotRecordsRequestPrivate(const LightsailRequest::Action action,
                                   GetExportSnapshotRecordsRequest * const q);
    GetExportSnapshotRecordsRequestPrivate(const GetExportSnapshotRecordsRequestPrivate &other,
                                   GetExportSnapshotRecordsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExportSnapshotRecordsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
