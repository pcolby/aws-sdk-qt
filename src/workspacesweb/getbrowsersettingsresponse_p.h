// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBROWSERSETTINGSRESPONSE_P_H
#define QTAWS_GETBROWSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetBrowserSettingsResponse;

class GetBrowserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit GetBrowserSettingsResponsePrivate(GetBrowserSettingsResponse * const q);

    void parseGetBrowserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBrowserSettingsResponse)
    Q_DISABLE_COPY(GetBrowserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
