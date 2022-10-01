// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNVERSIONRESPONSE_P_H
#define QTAWS_GETCAMPAIGNVERSIONRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignVersionResponse;

class GetCampaignVersionResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetCampaignVersionResponsePrivate(GetCampaignVersionResponse * const q);

    void parseGetCampaignVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCampaignVersionResponse)
    Q_DISABLE_COPY(GetCampaignVersionResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
