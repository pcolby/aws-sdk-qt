// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBROWSERSETTINGSRESPONSE_P_H
#define QTAWS_LISTBROWSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListBrowserSettingsResponse;

class ListBrowserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit ListBrowserSettingsResponsePrivate(ListBrowserSettingsResponse * const q);

    void parseListBrowserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBrowserSettingsResponse)
    Q_DISABLE_COPY(ListBrowserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
