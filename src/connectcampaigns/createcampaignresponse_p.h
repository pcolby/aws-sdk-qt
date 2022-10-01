// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAMPAIGNRESPONSE_P_H
#define QTAWS_CREATECAMPAIGNRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class CreateCampaignResponse;

class CreateCampaignResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit CreateCampaignResponsePrivate(CreateCampaignResponse * const q);

    void parseCreateCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCampaignResponse)
    Q_DISABLE_COPY(CreateCampaignResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
