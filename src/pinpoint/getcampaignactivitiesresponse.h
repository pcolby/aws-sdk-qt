// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNACTIVITIESRESPONSE_H
#define QTAWS_GETCAMPAIGNACTIVITIESRESPONSE_H

#include "pinpointresponse.h"
#include "getcampaignactivitiesrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignActivitiesResponsePrivate;

class QTAWSPINPOINT_EXPORT GetCampaignActivitiesResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetCampaignActivitiesResponse(const GetCampaignActivitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCampaignActivitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignActivitiesResponse)
    Q_DISABLE_COPY(GetCampaignActivitiesResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
