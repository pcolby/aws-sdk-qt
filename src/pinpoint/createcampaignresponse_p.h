// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAMPAIGNRESPONSE_P_H
#define QTAWS_CREATECAMPAIGNRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class CreateCampaignResponse;

class CreateCampaignResponsePrivate : public PinpointResponsePrivate {

public:

    explicit CreateCampaignResponsePrivate(CreateCampaignResponse * const q);

    void parseCreateCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCampaignResponse)
    Q_DISABLE_COPY(CreateCampaignResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
