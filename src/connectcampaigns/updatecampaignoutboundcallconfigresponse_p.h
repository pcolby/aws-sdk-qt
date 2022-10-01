// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNOUTBOUNDCALLCONFIGRESPONSE_P_H
#define QTAWS_UPDATECAMPAIGNOUTBOUNDCALLCONFIGRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignOutboundCallConfigResponse;

class UpdateCampaignOutboundCallConfigResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit UpdateCampaignOutboundCallConfigResponsePrivate(UpdateCampaignOutboundCallConfigResponse * const q);

    void parseUpdateCampaignOutboundCallConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCampaignOutboundCallConfigResponse)
    Q_DISABLE_COPY(UpdateCampaignOutboundCallConfigResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
