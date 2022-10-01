// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYWORKSPACEIMAGERESPONSE_P_H
#define QTAWS_COPYWORKSPACEIMAGERESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class CopyWorkspaceImageResponse;

class CopyWorkspaceImageResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit CopyWorkspaceImageResponsePrivate(CopyWorkspaceImageResponse * const q);

    void parseCopyWorkspaceImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyWorkspaceImageResponse)
    Q_DISABLE_COPY(CopyWorkspaceImageResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
