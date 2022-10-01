// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERWORKSPACEDIRECTORYRESPONSE_P_H
#define QTAWS_DEREGISTERWORKSPACEDIRECTORYRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DeregisterWorkspaceDirectoryResponse;

class DeregisterWorkspaceDirectoryResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DeregisterWorkspaceDirectoryResponsePrivate(DeregisterWorkspaceDirectoryResponse * const q);

    void parseDeregisterWorkspaceDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterWorkspaceDirectoryResponse)
    Q_DISABLE_COPY(DeregisterWorkspaceDirectoryResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
