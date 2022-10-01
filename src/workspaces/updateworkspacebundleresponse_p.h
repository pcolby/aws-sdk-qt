// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEBUNDLERESPONSE_P_H
#define QTAWS_UPDATEWORKSPACEBUNDLERESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateWorkspaceBundleResponse;

class UpdateWorkspaceBundleResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit UpdateWorkspaceBundleResponsePrivate(UpdateWorkspaceBundleResponse * const q);

    void parseUpdateWorkspaceBundleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkspaceBundleResponse)
    Q_DISABLE_COPY(UpdateWorkspaceBundleResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
