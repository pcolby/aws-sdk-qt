// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSECAMPAIGNRESPONSE_H
#define QTAWS_PAUSECAMPAIGNRESPONSE_H

#include "connectcampaignsresponse.h"
#include "pausecampaignrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class PauseCampaignResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT PauseCampaignResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    PauseCampaignResponse(const PauseCampaignRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PauseCampaignRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PauseCampaignResponse)
    Q_DISABLE_COPY(PauseCampaignResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
