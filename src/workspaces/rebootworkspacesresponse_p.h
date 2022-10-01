// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTWORKSPACESRESPONSE_P_H
#define QTAWS_REBOOTWORKSPACESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class RebootWorkspacesResponse;

class RebootWorkspacesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit RebootWorkspacesResponsePrivate(RebootWorkspacesResponse * const q);

    void parseRebootWorkspacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootWorkspacesResponse)
    Q_DISABLE_COPY(RebootWorkspacesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
