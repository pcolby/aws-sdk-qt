// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECAMPAIGNRESPONSE_P_H
#define QTAWS_DELETECAMPAIGNRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DeleteCampaignResponse;

class DeleteCampaignResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DeleteCampaignResponsePrivate(DeleteCampaignResponse * const q);

    void parseDeleteCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCampaignResponse)
    Q_DISABLE_COPY(DeleteCampaignResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
