// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTIREGIONACCESSPOINTPOLICYSTATUSREQUEST_P_H
#define QTAWS_GETMULTIREGIONACCESSPOINTPOLICYSTATUSREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getmultiregionaccesspointpolicystatusrequest.h"

namespace QtAws {
namespace S3Control {

class GetMultiRegionAccessPointPolicyStatusRequest;

class GetMultiRegionAccessPointPolicyStatusRequestPrivate : public S3ControlRequestPrivate {

public:
    GetMultiRegionAccessPointPolicyStatusRequestPrivate(const S3ControlRequest::Action action,
                                   GetMultiRegionAccessPointPolicyStatusRequest * const q);
    GetMultiRegionAccessPointPolicyStatusRequestPrivate(const GetMultiRegionAccessPointPolicyStatusRequestPrivate &other,
                                   GetMultiRegionAccessPointPolicyStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMultiRegionAccessPointPolicyStatusRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
