// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTORGANIZATIONSERVICEACCESSUPDATERESPONSE_P_H
#define QTAWS_STARTORGANIZATIONSERVICEACCESSUPDATERESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class StartOrganizationServiceAccessUpdateResponse;

class StartOrganizationServiceAccessUpdateResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit StartOrganizationServiceAccessUpdateResponsePrivate(StartOrganizationServiceAccessUpdateResponse * const q);

    void parseStartOrganizationServiceAccessUpdateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartOrganizationServiceAccessUpdateResponse)
    Q_DISABLE_COPY(StartOrganizationServiceAccessUpdateResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
