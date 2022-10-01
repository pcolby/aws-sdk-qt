// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSETTINGSRESPONSE_P_H
#define QTAWS_LISTNETWORKSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListNetworkSettingsResponse;

class ListNetworkSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit ListNetworkSettingsResponsePrivate(ListNetworkSettingsResponse * const q);

    void parseListNetworkSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNetworkSettingsResponse)
    Q_DISABLE_COPY(ListNetworkSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
