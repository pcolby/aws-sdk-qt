// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAMPAIGNRESPONSE_P_H
#define QTAWS_UPDATECAMPAIGNRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class UpdateCampaignResponse;

class UpdateCampaignResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit UpdateCampaignResponsePrivate(UpdateCampaignResponse * const q);

    void parseUpdateCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCampaignResponse)
    Q_DISABLE_COPY(UpdateCampaignResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
