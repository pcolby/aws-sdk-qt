// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSTATEBATCHRESPONSE_H
#define QTAWS_GETCAMPAIGNSTATEBATCHRESPONSE_H

#include "connectcampaignsresponse.h"
#include "getcampaignstatebatchrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetCampaignStateBatchResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT GetCampaignStateBatchResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    GetCampaignStateBatchResponse(const GetCampaignStateBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCampaignStateBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignStateBatchResponse)
    Q_DISABLE_COPY(GetCampaignStateBatchResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
