// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECAMPAIGNRESPONSE_P_H
#define QTAWS_DELETECAMPAIGNRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteCampaignResponse;

class DeleteCampaignResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteCampaignResponsePrivate(DeleteCampaignResponse * const q);

    void parseDeleteCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCampaignResponse)
    Q_DISABLE_COPY(DeleteCampaignResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
