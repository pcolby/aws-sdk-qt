// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCAMPAIGNRESPONSE_P_H
#define QTAWS_STOPCAMPAIGNRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class StopCampaignResponse;

class StopCampaignResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit StopCampaignResponsePrivate(StopCampaignResponse * const q);

    void parseStopCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopCampaignResponse)
    Q_DISABLE_COPY(StopCampaignResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
