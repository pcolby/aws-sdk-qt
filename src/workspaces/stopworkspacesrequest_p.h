// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPWORKSPACESREQUEST_P_H
#define QTAWS_STOPWORKSPACESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "stopworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class StopWorkspacesRequest;

class StopWorkspacesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    StopWorkspacesRequestPrivate(const WorkSpacesRequest::Action action,
                                   StopWorkspacesRequest * const q);
    StopWorkspacesRequestPrivate(const StopWorkspacesRequestPrivate &other,
                                   StopWorkspacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopWorkspacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
