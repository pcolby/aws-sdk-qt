// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNACTIVITIESRESPONSE_P_H
#define QTAWS_GETCAMPAIGNACTIVITIESRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignActivitiesResponse;

class GetCampaignActivitiesResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetCampaignActivitiesResponsePrivate(GetCampaignActivitiesResponse * const q);

    void parseGetCampaignActivitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCampaignActivitiesResponse)
    Q_DISABLE_COPY(GetCampaignActivitiesResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
