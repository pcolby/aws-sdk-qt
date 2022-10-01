// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEIMAGERESPONSE_P_H
#define QTAWS_DELETEWORKSPACEIMAGERESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteWorkspaceImageResponse;

class DeleteWorkspaceImageResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DeleteWorkspaceImageResponsePrivate(DeleteWorkspaceImageResponse * const q);

    void parseDeleteWorkspaceImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkspaceImageResponse)
    Q_DISABLE_COPY(DeleteWorkspaceImageResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
