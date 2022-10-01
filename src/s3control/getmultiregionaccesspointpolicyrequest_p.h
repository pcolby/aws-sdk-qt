// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTIREGIONACCESSPOINTPOLICYREQUEST_P_H
#define QTAWS_GETMULTIREGIONACCESSPOINTPOLICYREQUEST_P_H

#include "s3controlrequest_p.h"
#include "getmultiregionaccesspointpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class GetMultiRegionAccessPointPolicyRequest;

class GetMultiRegionAccessPointPolicyRequestPrivate : public S3ControlRequestPrivate {

public:
    GetMultiRegionAccessPointPolicyRequestPrivate(const S3ControlRequest::Action action,
                                   GetMultiRegionAccessPointPolicyRequest * const q);
    GetMultiRegionAccessPointPolicyRequestPrivate(const GetMultiRegionAccessPointPolicyRequestPrivate &other,
                                   GetMultiRegionAccessPointPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMultiRegionAccessPointPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
