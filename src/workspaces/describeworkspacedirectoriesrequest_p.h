// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEDIRECTORIESREQUEST_P_H
#define QTAWS_DESCRIBEWORKSPACEDIRECTORIESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeworkspacedirectoriesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceDirectoriesRequest;

class DescribeWorkspaceDirectoriesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeWorkspaceDirectoriesRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeWorkspaceDirectoriesRequest * const q);
    DescribeWorkspaceDirectoriesRequestPrivate(const DescribeWorkspaceDirectoriesRequestPrivate &other,
                                   DescribeWorkspaceDirectoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceDirectoriesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
