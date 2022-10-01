// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATEWORKSPACEREQUEST_P_H
#define QTAWS_MIGRATEWORKSPACEREQUEST_P_H

#include "workspacesrequest_p.h"
#include "migrateworkspacerequest.h"

namespace QtAws {
namespace WorkSpaces {

class MigrateWorkspaceRequest;

class MigrateWorkspaceRequestPrivate : public WorkSpacesRequestPrivate {

public:
    MigrateWorkspaceRequestPrivate(const WorkSpacesRequest::Action action,
                                   MigrateWorkspaceRequest * const q);
    MigrateWorkspaceRequestPrivate(const MigrateWorkspaceRequestPrivate &other,
                                   MigrateWorkspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(MigrateWorkspaceRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
