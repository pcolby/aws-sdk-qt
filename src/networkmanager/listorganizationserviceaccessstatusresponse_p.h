// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONSERVICEACCESSSTATUSRESPONSE_P_H
#define QTAWS_LISTORGANIZATIONSERVICEACCESSSTATUSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class ListOrganizationServiceAccessStatusResponse;

class ListOrganizationServiceAccessStatusResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit ListOrganizationServiceAccessStatusResponsePrivate(ListOrganizationServiceAccessStatusResponse * const q);

    void parseListOrganizationServiceAccessStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOrganizationServiceAccessStatusResponse)
    Q_DISABLE_COPY(ListOrganizationServiceAccessStatusResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
