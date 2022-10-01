// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECAMPAIGNRESPONSE_H
#define QTAWS_RESUMECAMPAIGNRESPONSE_H

#include "connectcampaignsresponse.h"
#include "resumecampaignrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class ResumeCampaignResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT ResumeCampaignResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    ResumeCampaignResponse(const ResumeCampaignRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResumeCampaignRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeCampaignResponse)
    Q_DISABLE_COPY(ResumeCampaignResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
