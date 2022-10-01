// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTINSTANCECONFIGRESPONSE_P_H
#define QTAWS_GETCONNECTINSTANCECONFIGRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class GetConnectInstanceConfigResponse;

class GetConnectInstanceConfigResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit GetConnectInstanceConfigResponsePrivate(GetConnectInstanceConfigResponse * const q);

    void parseGetConnectInstanceConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConnectInstanceConfigResponse)
    Q_DISABLE_COPY(GetConnectInstanceConfigResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
