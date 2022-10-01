// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBROWSERSETTINGSRESPONSE_P_H
#define QTAWS_DELETEBROWSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteBrowserSettingsResponse;

class DeleteBrowserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit DeleteBrowserSettingsResponsePrivate(DeleteBrowserSettingsResponse * const q);

    void parseDeleteBrowserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBrowserSettingsResponse)
    Q_DISABLE_COPY(DeleteBrowserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
