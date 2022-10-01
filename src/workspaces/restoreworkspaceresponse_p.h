// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREWORKSPACERESPONSE_P_H
#define QTAWS_RESTOREWORKSPACERESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class RestoreWorkspaceResponse;

class RestoreWorkspaceResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit RestoreWorkspaceResponsePrivate(RestoreWorkspaceResponse * const q);

    void parseRestoreWorkspaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreWorkspaceResponse)
    Q_DISABLE_COPY(RestoreWorkspaceResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
