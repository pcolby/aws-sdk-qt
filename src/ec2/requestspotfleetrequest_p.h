// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTSPOTFLEETREQUEST_P_H
#define QTAWS_REQUESTSPOTFLEETREQUEST_P_H

#include "ec2request_p.h"
#include "requestspotfleetrequest.h"

namespace QtAws {
namespace Ec2 {

class RequestSpotFleetRequest;

class RequestSpotFleetRequestPrivate : public Ec2RequestPrivate {

public:
    RequestSpotFleetRequestPrivate(const Ec2Request::Action action,
                                   RequestSpotFleetRequest * const q);
    RequestSpotFleetRequestPrivate(const RequestSpotFleetRequestPrivate &other,
                                   RequestSpotFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(RequestSpotFleetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
