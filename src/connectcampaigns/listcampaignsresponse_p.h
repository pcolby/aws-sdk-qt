// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCAMPAIGNSRESPONSE_P_H
#define QTAWS_LISTCAMPAIGNSRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class ListCampaignsResponse;

class ListCampaignsResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit ListCampaignsResponsePrivate(ListCampaignsResponse * const q);

    void parseListCampaignsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCampaignsResponse)
    Q_DISABLE_COPY(ListCampaignsResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
