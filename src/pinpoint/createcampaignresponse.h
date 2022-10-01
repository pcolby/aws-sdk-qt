// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAMPAIGNRESPONSE_H
#define QTAWS_CREATECAMPAIGNRESPONSE_H

#include "pinpointresponse.h"
#include "createcampaignrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateCampaignResponsePrivate;

class QTAWSPINPOINT_EXPORT CreateCampaignResponse : public PinpointResponse {
    Q_OBJECT

public:
    CreateCampaignResponse(const CreateCampaignRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCampaignRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCampaignResponse)
    Q_DISABLE_COPY(CreateCampaignResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
