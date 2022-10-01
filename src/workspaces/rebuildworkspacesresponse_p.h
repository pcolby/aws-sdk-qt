// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBUILDWORKSPACESRESPONSE_P_H
#define QTAWS_REBUILDWORKSPACESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class RebuildWorkspacesResponse;

class RebuildWorkspacesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit RebuildWorkspacesResponsePrivate(RebuildWorkspacesResponse * const q);

    void parseRebuildWorkspacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebuildWorkspacesResponse)
    Q_DISABLE_COPY(RebuildWorkspacesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
