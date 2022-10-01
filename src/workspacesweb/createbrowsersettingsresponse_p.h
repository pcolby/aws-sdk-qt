// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBROWSERSETTINGSRESPONSE_P_H
#define QTAWS_CREATEBROWSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateBrowserSettingsResponse;

class CreateBrowserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit CreateBrowserSettingsResponsePrivate(CreateBrowserSettingsResponse * const q);

    void parseCreateBrowserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBrowserSettingsResponse)
    Q_DISABLE_COPY(CreateBrowserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
