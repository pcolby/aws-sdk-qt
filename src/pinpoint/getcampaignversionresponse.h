// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNVERSIONRESPONSE_H
#define QTAWS_GETCAMPAIGNVERSIONRESPONSE_H

#include "pinpointresponse.h"
#include "getcampaignversionrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignVersionResponsePrivate;

class QTAWSPINPOINT_EXPORT GetCampaignVersionResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetCampaignVersionResponse(const GetCampaignVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCampaignVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignVersionResponse)
    Q_DISABLE_COPY(GetCampaignVersionResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
