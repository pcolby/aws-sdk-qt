// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNOUTBOUNDCALLCONFIGRESPONSE_H
#define QTAWS_UPDATECAMPAIGNOUTBOUNDCALLCONFIGRESPONSE_H

#include "connectcampaignsresponse.h"
#include "updatecampaignoutboundcallconfigrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignOutboundCallConfigResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT UpdateCampaignOutboundCallConfigResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    UpdateCampaignOutboundCallConfigResponse(const UpdateCampaignOutboundCallConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCampaignOutboundCallConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCampaignOutboundCallConfigResponse)
    Q_DISABLE_COPY(UpdateCampaignOutboundCallConfigResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
