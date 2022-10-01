// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACEBUNDLERESPONSE_P_H
#define QTAWS_CREATEWORKSPACEBUNDLERESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspaceBundleResponse;

class CreateWorkspaceBundleResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit CreateWorkspaceBundleResponsePrivate(CreateWorkspaceBundleResponse * const q);

    void parseCreateWorkspaceBundleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkspaceBundleResponse)
    Q_DISABLE_COPY(CreateWorkspaceBundleResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
