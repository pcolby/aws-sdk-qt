// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERSETTINGSRESPONSE_P_H
#define QTAWS_ASSOCIATEUSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateUserSettingsResponse;

class AssociateUserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit AssociateUserSettingsResponsePrivate(AssociateUserSettingsResponse * const q);

    void parseAssociateUserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateUserSettingsResponse)
    Q_DISABLE_COPY(AssociateUserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
