// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACECREATIONPROPERTIESRESPONSE_P_H
#define QTAWS_MODIFYWORKSPACECREATIONPROPERTIESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceCreationPropertiesResponse;

class ModifyWorkspaceCreationPropertiesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit ModifyWorkspaceCreationPropertiesResponsePrivate(ModifyWorkspaceCreationPropertiesResponse * const q);

    void parseModifyWorkspaceCreationPropertiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyWorkspaceCreationPropertiesResponse)
    Q_DISABLE_COPY(ModifyWorkspaceCreationPropertiesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
