// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTWORKSPACESRESPONSE_P_H
#define QTAWS_STARTWORKSPACESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class StartWorkspacesResponse;

class StartWorkspacesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit StartWorkspacesResponsePrivate(StartWorkspacesResponse * const q);

    void parseStartWorkspacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartWorkspacesResponse)
    Q_DISABLE_COPY(StartWorkspacesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
