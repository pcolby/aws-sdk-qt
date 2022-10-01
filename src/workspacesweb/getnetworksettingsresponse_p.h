// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKSETTINGSRESPONSE_P_H
#define QTAWS_GETNETWORKSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetNetworkSettingsResponse;

class GetNetworkSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit GetNetworkSettingsResponsePrivate(GetNetworkSettingsResponse * const q);

    void parseGetNetworkSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNetworkSettingsResponse)
    Q_DISABLE_COPY(GetNetworkSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
