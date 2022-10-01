// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCAMPAIGNRESPONSE_P_H
#define QTAWS_STARTCAMPAIGNRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class StartCampaignResponse;

class StartCampaignResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit StartCampaignResponsePrivate(StartCampaignResponse * const q);

    void parseStartCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartCampaignResponse)
    Q_DISABLE_COPY(StartCampaignResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
