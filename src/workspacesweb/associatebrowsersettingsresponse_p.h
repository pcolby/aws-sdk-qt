// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEBROWSERSETTINGSRESPONSE_P_H
#define QTAWS_ASSOCIATEBROWSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateBrowserSettingsResponse;

class AssociateBrowserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit AssociateBrowserSettingsResponsePrivate(AssociateBrowserSettingsResponse * const q);

    void parseAssociateBrowserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateBrowserSettingsResponse)
    Q_DISABLE_COPY(AssociateBrowserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
