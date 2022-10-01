// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNRESPONSE_P_H
#define QTAWS_GETCAMPAIGNRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignResponse;

class GetCampaignResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetCampaignResponsePrivate(GetCampaignResponse * const q);

    void parseGetCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCampaignResponse)
    Q_DISABLE_COPY(GetCampaignResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
