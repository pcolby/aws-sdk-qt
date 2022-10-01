// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSPOTINSTANCEREQUESTSREQUEST_P_H
#define QTAWS_CANCELSPOTINSTANCEREQUESTSREQUEST_P_H

#include "ec2request_p.h"
#include "cancelspotinstancerequestsrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelSpotInstanceRequestsRequest;

class CancelSpotInstanceRequestsRequestPrivate : public Ec2RequestPrivate {

public:
    CancelSpotInstanceRequestsRequestPrivate(const Ec2Request::Action action,
                                   CancelSpotInstanceRequestsRequest * const q);
    CancelSpotInstanceRequestsRequestPrivate(const CancelSpotInstanceRequestsRequestPrivate &other,
                                   CancelSpotInstanceRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelSpotInstanceRequestsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
