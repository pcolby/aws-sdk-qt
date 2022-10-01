// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKSETTINGSRESPONSE_P_H
#define QTAWS_DELETENETWORKSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteNetworkSettingsResponse;

class DeleteNetworkSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit DeleteNetworkSettingsResponsePrivate(DeleteNetworkSettingsResponse * const q);

    void parseDeleteNetworkSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkSettingsResponse)
    Q_DISABLE_COPY(DeleteNetworkSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
