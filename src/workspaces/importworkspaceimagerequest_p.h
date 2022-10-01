// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTWORKSPACEIMAGEREQUEST_P_H
#define QTAWS_IMPORTWORKSPACEIMAGEREQUEST_P_H

#include "workspacesrequest_p.h"
#include "importworkspaceimagerequest.h"

namespace QtAws {
namespace WorkSpaces {

class ImportWorkspaceImageRequest;

class ImportWorkspaceImageRequestPrivate : public WorkSpacesRequestPrivate {

public:
    ImportWorkspaceImageRequestPrivate(const WorkSpacesRequest::Action action,
                                   ImportWorkspaceImageRequest * const q);
    ImportWorkspaceImageRequestPrivate(const ImportWorkspaceImageRequestPrivate &other,
                                   ImportWorkspaceImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportWorkspaceImageRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
