// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATENETWORKSETTINGSRESPONSE_P_H
#define QTAWS_ASSOCIATENETWORKSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateNetworkSettingsResponse;

class AssociateNetworkSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit AssociateNetworkSettingsResponsePrivate(AssociateNetworkSettingsResponse * const q);

    void parseAssociateNetworkSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateNetworkSettingsResponse)
    Q_DISABLE_COPY(AssociateNetworkSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
