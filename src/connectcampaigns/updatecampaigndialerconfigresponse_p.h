// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNDIALERCONFIGRESPONSE_P_H
#define QTAWS_UPDATECAMPAIGNDIALERCONFIGRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignDialerConfigResponse;

class UpdateCampaignDialerConfigResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit UpdateCampaignDialerConfigResponsePrivate(UpdateCampaignDialerConfigResponse * const q);

    void parseUpdateCampaignDialerConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCampaignDialerConfigResponse)
    Q_DISABLE_COPY(UpdateCampaignDialerConfigResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
