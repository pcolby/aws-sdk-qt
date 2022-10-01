// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTINSTANCECONFIGRESPONSE_P_H
#define QTAWS_DELETECONNECTINSTANCECONFIGRESPONSE_P_H

#include "connectcampaignsresponse_p.h"

namespace QtAws {
namespace ConnectCampaigns {

class DeleteConnectInstanceConfigResponse;

class DeleteConnectInstanceConfigResponsePrivate : public ConnectCampaignsResponsePrivate {

public:

    explicit DeleteConnectInstanceConfigResponsePrivate(DeleteConnectInstanceConfigResponse * const q);

    void parseDeleteConnectInstanceConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConnectInstanceConfigResponse)
    Q_DISABLE_COPY(DeleteConnectInstanceConfigResponsePrivate)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
