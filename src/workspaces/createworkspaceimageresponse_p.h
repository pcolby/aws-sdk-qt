// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEIMAGERESPONSE_P_H
#define QTAWS_CREATEWORKSPACEIMAGERESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspaceImageResponse;

class CreateWorkspaceImageResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit CreateWorkspaceImageResponsePrivate(CreateWorkspaceImageResponse * const q);

    void parseCreateWorkspaceImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkspaceImageResponse)
    Q_DISABLE_COPY(CreateWorkspaceImageResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
