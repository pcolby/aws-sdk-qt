// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERWORKSPACEDIRECTORYRESPONSE_P_H
#define QTAWS_REGISTERWORKSPACEDIRECTORYRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class RegisterWorkspaceDirectoryResponse;

class RegisterWorkspaceDirectoryResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit RegisterWorkspaceDirectoryResponsePrivate(RegisterWorkspaceDirectoryResponse * const q);

    void parseRegisterWorkspaceDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterWorkspaceDirectoryResponse)
    Q_DISABLE_COPY(RegisterWorkspaceDirectoryResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
