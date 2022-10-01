// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSTATEBATCHRESPONSE_P_H
#define QTAWS_GETCAMPAIGNSTATEBATCHRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetCampaignStateBatchResponse;

class GetCampaignStateBatchResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit GetCampaignStateBatchResponsePrivate(GetCampaignStateBatchResponse * const q);

    void parseGetCampaignStateBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCampaignStateBatchResponse)
    Q_DISABLE_COPY(GetCampaignStateBatchResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
