// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTSPOTINSTANCESREQUEST_P_H
#define QTAWS_REQUESTSPOTINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "requestspotinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class RequestSpotInstancesRequest;

class RequestSpotInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    RequestSpotInstancesRequestPrivate(const Ec2Request::Action action,
                                   RequestSpotInstancesRequest * const q);
    RequestSpotInstancesRequestPrivate(const RequestSpotInstancesRequestPrivate &other,
                                   RequestSpotInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RequestSpotInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
