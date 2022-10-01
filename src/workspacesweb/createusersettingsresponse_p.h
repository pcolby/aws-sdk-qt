// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERSETTINGSRESPONSE_P_H
#define QTAWS_CREATEUSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateUserSettingsResponse;

class CreateUserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit CreateUserSettingsResponsePrivate(CreateUserSettingsResponse * const q);

    void parseCreateUserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUserSettingsResponse)
    Q_DISABLE_COPY(CreateUserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
