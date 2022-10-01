// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKSPACESREQUEST_P_H
#define QTAWS_CREATEWORKSPACESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "createworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateWorkspacesRequest;

class CreateWorkspacesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    CreateWorkspacesRequestPrivate(const WorkSpacesRequest::Action action,
                                   CreateWorkspacesRequest * const q);
    CreateWorkspacesRequestPrivate(const CreateWorkspacesRequestPrivate &other,
                                   CreateWorkspacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkspacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
