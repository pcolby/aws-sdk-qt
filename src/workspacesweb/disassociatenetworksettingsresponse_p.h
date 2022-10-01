// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATENETWORKSETTINGSRESPONSE_P_H
#define QTAWS_DISASSOCIATENETWORKSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateNetworkSettingsResponse;

class DisassociateNetworkSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit DisassociateNetworkSettingsResponsePrivate(DisassociateNetworkSettingsResponse * const q);

    void parseDisassociateNetworkSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateNetworkSettingsResponse)
    Q_DISABLE_COPY(DisassociateNetworkSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
