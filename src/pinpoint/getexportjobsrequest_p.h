// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTJOBSREQUEST_P_H
#define QTAWS_GETEXPORTJOBSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getexportjobsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetExportJobsRequest;

class GetExportJobsRequestPrivate : public PinpointRequestPrivate {

public:
    GetExportJobsRequestPrivate(const PinpointRequest::Action action,
                                   GetExportJobsRequest * const q);
    GetExportJobsRequestPrivate(const GetExportJobsRequestPrivate &other,
                                   GetExportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExportJobsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
