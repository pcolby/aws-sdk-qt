// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYWORKSPACEIMAGEREQUEST_P_H
#define QTAWS_COPYWORKSPACEIMAGEREQUEST_P_H

#include "workspacesrequest_p.h"
#include "copyworkspaceimagerequest.h"

namespace QtAws {
namespace WorkSpaces {

class CopyWorkspaceImageRequest;

class CopyWorkspaceImageRequestPrivate : public WorkSpacesRequestPrivate {

public:
    CopyWorkspaceImageRequestPrivate(const WorkSpacesRequest::Action action,
                                   CopyWorkspaceImageRequest * const q);
    CopyWorkspaceImageRequestPrivate(const CopyWorkspaceImageRequestPrivate &other,
                                   CopyWorkspaceImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyWorkspaceImageRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
