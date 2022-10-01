// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACEACCESSPROPERTIESRESPONSE_P_H
#define QTAWS_MODIFYWORKSPACEACCESSPROPERTIESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceAccessPropertiesResponse;

class ModifyWorkspaceAccessPropertiesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit ModifyWorkspaceAccessPropertiesResponsePrivate(ModifyWorkspaceAccessPropertiesResponse * const q);

    void parseModifyWorkspaceAccessPropertiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyWorkspaceAccessPropertiesResponse)
    Q_DISABLE_COPY(ModifyWorkspaceAccessPropertiesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
