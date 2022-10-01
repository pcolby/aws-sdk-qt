// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNVERSIONSRESPONSE_H
#define QTAWS_GETCAMPAIGNVERSIONSRESPONSE_H

#include "pinpointresponse.h"
#include "getcampaignversionsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignVersionsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetCampaignVersionsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetCampaignVersionsResponse(const GetCampaignVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCampaignVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignVersionsResponse)
    Q_DISABLE_COPY(GetCampaignVersionsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
