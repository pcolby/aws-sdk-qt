// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROWSERSETTINGSRESPONSE_P_H
#define QTAWS_UPDATEBROWSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateBrowserSettingsResponse;

class UpdateBrowserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit UpdateBrowserSettingsResponsePrivate(UpdateBrowserSettingsResponse * const q);

    void parseUpdateBrowserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBrowserSettingsResponse)
    Q_DISABLE_COPY(UpdateBrowserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
