// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBUILDWORKSPACESREQUEST_P_H
#define QTAWS_REBUILDWORKSPACESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "rebuildworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RebuildWorkspacesRequest;

class RebuildWorkspacesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    RebuildWorkspacesRequestPrivate(const WorkSpacesRequest::Action action,
                                   RebuildWorkspacesRequest * const q);
    RebuildWorkspacesRequestPrivate(const RebuildWorkspacesRequestPrivate &other,
                                   RebuildWorkspacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebuildWorkspacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
