// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNNAMERESPONSE_P_H
#define QTAWS_UPDATECAMPAIGNNAMERESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignNameResponse;

class UpdateCampaignNameResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit UpdateCampaignNameResponsePrivate(UpdateCampaignNameResponse * const q);

    void parseUpdateCampaignNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCampaignNameResponse)
    Q_DISABLE_COPY(UpdateCampaignNameResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
