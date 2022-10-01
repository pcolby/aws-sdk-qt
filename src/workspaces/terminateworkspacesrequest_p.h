// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEWORKSPACESREQUEST_P_H
#define QTAWS_TERMINATEWORKSPACESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "terminateworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class TerminateWorkspacesRequest;

class TerminateWorkspacesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    TerminateWorkspacesRequestPrivate(const WorkSpacesRequest::Action action,
                                   TerminateWorkspacesRequest * const q);
    TerminateWorkspacesRequestPrivate(const TerminateWorkspacesRequestPrivate &other,
                                   TerminateWorkspacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateWorkspacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
