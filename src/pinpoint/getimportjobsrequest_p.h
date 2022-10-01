// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTJOBSREQUEST_P_H
#define QTAWS_GETIMPORTJOBSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getimportjobsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetImportJobsRequest;

class GetImportJobsRequestPrivate : public PinpointRequestPrivate {

public:
    GetImportJobsRequestPrivate(const PinpointRequest::Action action,
                                   GetImportJobsRequest * const q);
    GetImportJobsRequestPrivate(const GetImportJobsRequestPrivate &other,
                                   GetImportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetImportJobsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
