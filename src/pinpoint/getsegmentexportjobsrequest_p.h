// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTEXPORTJOBSREQUEST_P_H
#define QTAWS_GETSEGMENTEXPORTJOBSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getsegmentexportjobsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentExportJobsRequest;

class GetSegmentExportJobsRequestPrivate : public PinpointRequestPrivate {

public:
    GetSegmentExportJobsRequestPrivate(const PinpointRequest::Action action,
                                   GetSegmentExportJobsRequest * const q);
    GetSegmentExportJobsRequestPrivate(const GetSegmentExportJobsRequestPrivate &other,
                                   GetSegmentExportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSegmentExportJobsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
