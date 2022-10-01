// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYWORKSPACESTATERESPONSE_P_H
#define QTAWS_MODIFYWORKSPACESTATERESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyWorkspaceStateResponse;

class ModifyWorkspaceStateResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit ModifyWorkspaceStateResponsePrivate(ModifyWorkspaceStateResponse * const q);

    void parseModifyWorkspaceStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyWorkspaceStateResponse)
    Q_DISABLE_COPY(ModifyWorkspaceStateResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
