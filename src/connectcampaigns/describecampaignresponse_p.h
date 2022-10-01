// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAMPAIGNRESPONSE_P_H
#define QTAWS_DESCRIBECAMPAIGNRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class DescribeCampaignResponse;

class DescribeCampaignResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit DescribeCampaignResponsePrivate(DescribeCampaignResponse * const q);

    void parseDescribeCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCampaignResponse)
    Q_DISABLE_COPY(DescribeCampaignResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
