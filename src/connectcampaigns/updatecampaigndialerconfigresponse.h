// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNDIALERCONFIGRESPONSE_H
#define QTAWS_UPDATECAMPAIGNDIALERCONFIGRESPONSE_H

#include "connectcampaignsresponse.h"
#include "updatecampaigndialerconfigrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class UpdateCampaignDialerConfigResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT UpdateCampaignDialerConfigResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    UpdateCampaignDialerConfigResponse(const UpdateCampaignDialerConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCampaignDialerConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCampaignDialerConfigResponse)
    Q_DISABLE_COPY(UpdateCampaignDialerConfigResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
