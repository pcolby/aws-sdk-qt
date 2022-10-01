// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSTATERESPONSE_P_H
#define QTAWS_GETCAMPAIGNSTATERESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetCampaignStateResponse;

class GetCampaignStateResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit GetCampaignStateResponsePrivate(GetCampaignStateResponse * const q);

    void parseGetCampaignStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCampaignStateResponse)
    Q_DISABLE_COPY(GetCampaignStateResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
