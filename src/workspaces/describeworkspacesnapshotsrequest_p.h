// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESNAPSHOTSREQUEST_P_H
#define QTAWS_DESCRIBEWORKSPACESNAPSHOTSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeworkspacesnapshotsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceSnapshotsRequest;

class DescribeWorkspaceSnapshotsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeWorkspaceSnapshotsRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeWorkspaceSnapshotsRequest * const q);
    DescribeWorkspaceSnapshotsRequestPrivate(const DescribeWorkspaceSnapshotsRequestPrivate &other,
                                   DescribeWorkspaceSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceSnapshotsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
