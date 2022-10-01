// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSETTINGSRESPONSE_P_H
#define QTAWS_LISTUSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListUserSettingsResponse;

class ListUserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit ListUserSettingsResponsePrivate(ListUserSettingsResponse * const q);

    void parseListUserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUserSettingsResponse)
    Q_DISABLE_COPY(ListUserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
