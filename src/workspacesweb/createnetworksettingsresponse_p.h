// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKSETTINGSRESPONSE_P_H
#define QTAWS_CREATENETWORKSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateNetworkSettingsResponse;

class CreateNetworkSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit CreateNetworkSettingsResponsePrivate(CreateNetworkSettingsResponse * const q);

    void parseCreateNetworkSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNetworkSettingsResponse)
    Q_DISABLE_COPY(CreateNetworkSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
