// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNRESPONSE_H
#define QTAWS_GETCAMPAIGNRESPONSE_H

#include "pinpointresponse.h"
#include "getcampaignrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignResponsePrivate;

class QTAWSPINPOINT_EXPORT GetCampaignResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetCampaignResponse(const GetCampaignRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCampaignRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignResponse)
    Q_DISABLE_COPY(GetCampaignResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
