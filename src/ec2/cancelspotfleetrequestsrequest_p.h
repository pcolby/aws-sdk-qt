// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSPOTFLEETREQUESTSREQUEST_P_H
#define QTAWS_CANCELSPOTFLEETREQUESTSREQUEST_P_H

#include "ec2request_p.h"
#include "cancelspotfleetrequestsrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelSpotFleetRequestsRequest;

class CancelSpotFleetRequestsRequestPrivate : public Ec2RequestPrivate {

public:
    CancelSpotFleetRequestsRequestPrivate(const Ec2Request::Action action,
                                   CancelSpotFleetRequestsRequest * const q);
    CancelSpotFleetRequestsRequestPrivate(const CancelSpotFleetRequestsRequestPrivate &other,
                                   CancelSpotFleetRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelSpotFleetRequestsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
