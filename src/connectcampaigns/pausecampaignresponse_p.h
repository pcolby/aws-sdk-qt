// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSECAMPAIGNRESPONSE_P_H
#define QTAWS_PAUSECAMPAIGNRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class PauseCampaignResponse;

class PauseCampaignResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit PauseCampaignResponsePrivate(PauseCampaignResponse * const q);

    void parsePauseCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PauseCampaignResponse)
    Q_DISABLE_COPY(PauseCampaignResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
