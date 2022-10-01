// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAMPAIGNRESPONSE_H
#define QTAWS_DESCRIBECAMPAIGNRESPONSE_H

#include "connectcampaignsresponse.h"
#include "describecampaignrequest.h"

namespace QtAws {
namespace ConnectCampaigns {

class DescribeCampaignResponsePrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT DescribeCampaignResponse : public ConnectCampaignsResponse {
    Q_OBJECT

public:
    DescribeCampaignResponse(const DescribeCampaignRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCampaignRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCampaignResponse)
    Q_DISABLE_COPY(DescribeCampaignResponse)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
