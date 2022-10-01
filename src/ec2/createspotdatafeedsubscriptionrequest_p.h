// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESPOTDATAFEEDSUBSCRIPTIONREQUEST_P_H
#define QTAWS_CREATESPOTDATAFEEDSUBSCRIPTIONREQUEST_P_H

#include "ec2request_p.h"
#include "createspotdatafeedsubscriptionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateSpotDatafeedSubscriptionRequest;

class CreateSpotDatafeedSubscriptionRequestPrivate : public Ec2RequestPrivate {

public:
    CreateSpotDatafeedSubscriptionRequestPrivate(const Ec2Request::Action action,
                                   CreateSpotDatafeedSubscriptionRequest * const q);
    CreateSpotDatafeedSubscriptionRequestPrivate(const CreateSpotDatafeedSubscriptionRequestPrivate &other,
                                   CreateSpotDatafeedSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSpotDatafeedSubscriptionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
