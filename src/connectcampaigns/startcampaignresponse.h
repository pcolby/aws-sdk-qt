// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCAMPAIGNRESPONSE_H
#define QTAWS_STARTCAMPAIGNRESPONSE_H

#include "connectcampaignsresponse.h"
#include "startcampaignrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class StartCampaignResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT StartCampaignResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    StartCampaignResponse(const StartCampaignRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartCampaignRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCampaignResponse)
    Q_DISABLE_COPY(StartCampaignResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
