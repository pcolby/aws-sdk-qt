// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEBROWSERSETTINGSRESPONSE_P_H
#define QTAWS_DISASSOCIATEBROWSERSETTINGSRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateBrowserSettingsResponse;

class DisassociateBrowserSettingsResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit DisassociateBrowserSettingsResponsePrivate(DisassociateBrowserSettingsResponse * const q);

    void parseDisassociateBrowserSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateBrowserSettingsResponse)
    Q_DISABLE_COPY(DisassociateBrowserSettingsResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
