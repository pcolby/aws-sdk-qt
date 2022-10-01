// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKSETTINGSRESPONSE_P_H
#define QTAWS_UPDATENETWORKSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateNetworkSettingsResponse;

class UpdateNetworkSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit UpdateNetworkSettingsResponsePrivate(UpdateNetworkSettingsResponse * const q);

    void parseUpdateNetworkSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkSettingsResponse)
    Q_DISABLE_COPY(UpdateNetworkSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
