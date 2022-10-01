// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSRESPONSE_H
#define QTAWS_GETCAMPAIGNSRESPONSE_H

#include "pinpointresponse.h"
#include "getcampaignsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetCampaignsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetCampaignsResponse(const GetCampaignsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCampaignsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCampaignsResponse)
    Q_DISABLE_COPY(GetCampaignsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
