// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECAMPAIGNRESPONSE_P_H
#define QTAWS_RESUMECAMPAIGNRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class ResumeCampaignResponse;

class ResumeCampaignResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit ResumeCampaignResponsePrivate(ResumeCampaignResponse * const q);

    void parseResumeCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResumeCampaignResponse)
    Q_DISABLE_COPY(ResumeCampaignResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
