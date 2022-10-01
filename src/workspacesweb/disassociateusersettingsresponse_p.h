// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERSETTINGSRESPONSE_P_H
#define QTAWS_DISASSOCIATEUSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateUserSettingsResponse;

class DisassociateUserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit DisassociateUserSettingsResponsePrivate(DisassociateUserSettingsResponse * const q);

    void parseDisassociateUserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateUserSettingsResponse)
    Q_DISABLE_COPY(DisassociateUserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
