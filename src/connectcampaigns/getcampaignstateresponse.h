// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSTATERESPONSE_H
#define QTAWS_GETCAMPAIGNSTATERESPONSE_H

#include "connectcampaignsresponse.h"
#include "getcampaignstaterequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetCampaignStateResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT GetCampaignStateResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    GetCampaignStateResponse(const GetCampaignStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCampaignStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignStateResponse)
    Q_DISABLE_COPY(GetCampaignStateResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
