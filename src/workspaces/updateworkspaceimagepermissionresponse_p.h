// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEIMAGEPERMISSIONRESPONSE_P_H
#define QTAWS_UPDATEWORKSPACEIMAGEPERMISSIONRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateWorkspaceImagePermissionResponse;

class UpdateWorkspaceImagePermissionResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit UpdateWorkspaceImagePermissionResponsePrivate(UpdateWorkspaceImagePermissionResponse * const q);

    void parseUpdateWorkspaceImagePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkspaceImagePermissionResponse)
    Q_DISABLE_COPY(UpdateWorkspaceImagePermissionResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
