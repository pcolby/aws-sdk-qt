// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESPOTDATAFEEDSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_CREATESPOTDATAFEEDSUBSCRIPTIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateSpotDatafeedSubscriptionResponse;

class CreateSpotDatafeedSubscriptionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateSpotDatafeedSubscriptionResponsePrivate(CreateSpotDatafeedSubscriptionResponse * const q);

    void parseCreateSpotDatafeedSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSpotDatafeedSubscriptionResponse)
    Q_DISABLE_COPY(CreateSpotDatafeedSubscriptionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
