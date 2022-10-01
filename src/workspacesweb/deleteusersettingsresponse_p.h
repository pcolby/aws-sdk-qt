// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERSETTINGSRESPONSE_P_H
#define QTAWS_DELETEUSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteUserSettingsResponse;

class DeleteUserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit DeleteUserSettingsResponsePrivate(DeleteUserSettingsResponse * const q);

    void parseDeleteUserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserSettingsResponse)
    Q_DISABLE_COPY(DeleteUserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
