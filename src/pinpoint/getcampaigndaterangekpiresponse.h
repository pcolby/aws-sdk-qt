// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNDATERANGEKPIRESPONSE_H
#define QTAWS_GETCAMPAIGNDATERANGEKPIRESPONSE_H

#include "pinpointresponse.h"
#include "getcampaigndaterangekpirequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignDateRangeKpiResponsePrivate;

class QTAWSPINPOINT_EXPORT GetCampaignDateRangeKpiResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetCampaignDateRangeKpiResponse(const GetCampaignDateRangeKpiRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCampaignDateRangeKpiRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignDateRangeKpiResponse)
    Q_DISABLE_COPY(GetCampaignDateRangeKpiResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
