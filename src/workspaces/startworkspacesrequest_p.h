// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTWORKSPACESREQUEST_P_H
#define QTAWS_STARTWORKSPACESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "startworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class StartWorkspacesRequest;

class StartWorkspacesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    StartWorkspacesRequestPrivate(const WorkSpacesRequest::Action action,
                                   StartWorkspacesRequest * const q);
    StartWorkspacesRequestPrivate(const StartWorkspacesRequestPrivate &other,
                                   StartWorkspacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartWorkspacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
