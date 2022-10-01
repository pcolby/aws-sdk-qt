// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACEPROPERTIESRESPONSE_P_H
#define QTAWS_MODIFYWORKSPACEPROPERTIESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspacePropertiesResponse;

class ModifyWorkspacePropertiesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit ModifyWorkspacePropertiesResponsePrivate(ModifyWorkspacePropertiesResponse * const q);

    void parseModifyWorkspacePropertiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyWorkspacePropertiesResponse)
    Q_DISABLE_COPY(ModifyWorkspacePropertiesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
