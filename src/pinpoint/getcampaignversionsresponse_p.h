// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNVERSIONSRESPONSE_P_H
#define QTAWS_GETCAMPAIGNVERSIONSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignVersionsResponse;

class GetCampaignVersionsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetCampaignVersionsResponsePrivate(GetCampaignVersionsResponse * const q);

    void parseGetCampaignVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCampaignVersionsResponse)
    Q_DISABLE_COPY(GetCampaignVersionsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
