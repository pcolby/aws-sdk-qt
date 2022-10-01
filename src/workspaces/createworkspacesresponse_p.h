// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACESRESPONSE_P_H
#define QTAWS_CREATEWORKSPACESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspacesResponse;

class CreateWorkspacesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit CreateWorkspacesResponsePrivate(CreateWorkspacesResponse * const q);

    void parseCreateWorkspacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkspacesResponse)
    Q_DISABLE_COPY(CreateWorkspacesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
