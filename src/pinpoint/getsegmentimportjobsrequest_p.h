// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTIMPORTJOBSREQUEST_P_H
#define QTAWS_GETSEGMENTIMPORTJOBSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getsegmentimportjobsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSegmentImportJobsRequest;

class GetSegmentImportJobsRequestPrivate : public PinpointRequestPrivate {

public:
    GetSegmentImportJobsRequestPrivate(const PinpointRequest::Action action,
                                   GetSegmentImportJobsRequest * const q);
    GetSegmentImportJobsRequestPrivate(const GetSegmentImportJobsRequestPrivate &other,
                                   GetSegmentImportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSegmentImportJobsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
