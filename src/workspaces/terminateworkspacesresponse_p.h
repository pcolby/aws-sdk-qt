// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEWORKSPACESRESPONSE_P_H
#define QTAWS_TERMINATEWORKSPACESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class TerminateWorkspacesResponse;

class TerminateWorkspacesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit TerminateWorkspacesResponsePrivate(TerminateWorkspacesResponse * const q);

    void parseTerminateWorkspacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateWorkspacesResponse)
    Q_DISABLE_COPY(TerminateWorkspacesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
