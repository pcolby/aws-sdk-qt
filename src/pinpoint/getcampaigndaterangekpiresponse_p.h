// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNDATERANGEKPIRESPONSE_P_H
#define QTAWS_GETCAMPAIGNDATERANGEKPIRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignDateRangeKpiResponse;

class GetCampaignDateRangeKpiResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetCampaignDateRangeKpiResponsePrivate(GetCampaignDateRangeKpiResponse * const q);

    void parseGetCampaignDateRangeKpiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCampaignDateRangeKpiResponse)
    Q_DISABLE_COPY(GetCampaignDateRangeKpiResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
