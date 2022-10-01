// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPWORKSPACESRESPONSE_P_H
#define QTAWS_STOPWORKSPACESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class StopWorkspacesResponse;

class StopWorkspacesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit StopWorkspacesResponsePrivate(StopWorkspacesResponse * const q);

    void parseStopWorkspacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopWorkspacesResponse)
    Q_DISABLE_COPY(StopWorkspacesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
