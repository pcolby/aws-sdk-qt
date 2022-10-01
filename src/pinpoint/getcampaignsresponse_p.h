// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCAMPAIGNSRESPONSE_P_H
#define QTAWS_GETCAMPAIGNSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetCampaignsResponse;

class GetCampaignsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetCampaignsResponsePrivate(GetCampaignsResponse * const q);

    void parseGetCampaignsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCampaignsResponse)
    Q_DISABLE_COPY(GetCampaignsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
