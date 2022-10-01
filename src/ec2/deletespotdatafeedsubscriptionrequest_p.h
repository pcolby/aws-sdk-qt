// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESPOTDATAFEEDSUBSCRIPTIONREQUEST_P_H
#define QTAWS_DELETESPOTDATAFEEDSUBSCRIPTIONREQUEST_P_H

#include "ec2request_p.h"
#include "deletespotdatafeedsubscriptionrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteSpotDatafeedSubscriptionRequest;

class DeleteSpotDatafeedSubscriptionRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteSpotDatafeedSubscriptionRequestPrivate(const Ec2Request::Action action,
                                   DeleteSpotDatafeedSubscriptionRequest * const q);
    DeleteSpotDatafeedSubscriptionRequestPrivate(const DeleteSpotDatafeedSubscriptionRequestPrivate &other,
                                   DeleteSpotDatafeedSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSpotDatafeedSubscriptionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
