// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPDATEDWORKSPACEIMAGERESPONSE_P_H
#define QTAWS_CREATEUPDATEDWORKSPACEIMAGERESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class CreateUpdatedWorkspaceImageResponse;

class CreateUpdatedWorkspaceImageResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit CreateUpdatedWorkspaceImageResponsePrivate(CreateUpdatedWorkspaceImageResponse * const q);

    void parseCreateUpdatedWorkspaceImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUpdatedWorkspaceImageResponse)
    Q_DISABLE_COPY(CreateUpdatedWorkspaceImageResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
