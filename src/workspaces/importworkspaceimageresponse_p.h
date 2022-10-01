// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTWORKSPACEIMAGERESPONSE_P_H
#define QTAWS_IMPORTWORKSPACEIMAGERESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class ImportWorkspaceImageResponse;

class ImportWorkspaceImageResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit ImportWorkspaceImageResponsePrivate(ImportWorkspaceImageResponse * const q);

    void parseImportWorkspaceImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportWorkspaceImageResponse)
    Q_DISABLE_COPY(ImportWorkspaceImageResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
