// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREWORKSPACEREQUEST_P_H
#define QTAWS_RESTOREWORKSPACEREQUEST_P_H

#include "workspacesrequest_p.h"
#include "restoreworkspacerequest.h"

namespace QtAws {
namespace WorkSpaces {

class RestoreWorkspaceRequest;

class RestoreWorkspaceRequestPrivate : public WorkSpacesRequestPrivate {

public:
    RestoreWorkspaceRequestPrivate(const WorkSpacesRequest::Action action,
                                   RestoreWorkspaceRequest * const q);
    RestoreWorkspaceRequestPrivate(const RestoreWorkspaceRequestPrivate &other,
                                   RestoreWorkspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreWorkspaceRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
