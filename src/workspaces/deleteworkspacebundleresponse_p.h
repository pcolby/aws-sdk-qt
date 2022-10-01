// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEBUNDLERESPONSE_P_H
#define QTAWS_DELETEWORKSPACEBUNDLERESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteWorkspaceBundleResponse;

class DeleteWorkspaceBundleResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DeleteWorkspaceBundleResponsePrivate(DeleteWorkspaceBundleResponse * const q);

    void parseDeleteWorkspaceBundleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkspaceBundleResponse)
    Q_DISABLE_COPY(DeleteWorkspaceBundleResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
