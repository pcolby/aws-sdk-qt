// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMULTIREGIONACCESSPOINTPOLICYREQUEST_P_H
#define QTAWS_PUTMULTIREGIONACCESSPOINTPOLICYREQUEST_P_H

#include "s3controlrequest_p.h"
#include "putmultiregionaccesspointpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class PutMultiRegionAccessPointPolicyRequest;

class PutMultiRegionAccessPointPolicyRequestPrivate : public S3ControlRequestPrivate {

public:
    PutMultiRegionAccessPointPolicyRequestPrivate(const S3ControlRequest::Action action,
                                   PutMultiRegionAccessPointPolicyRequest * const q);
    PutMultiRegionAccessPointPolicyRequestPrivate(const PutMultiRegionAccessPointPolicyRequestPrivate &other,
                                   PutMultiRegionAccessPointPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMultiRegionAccessPointPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
