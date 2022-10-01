// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEIMAGEPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBEWORKSPACEIMAGEPERMISSIONSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeworkspaceimagepermissionsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceImagePermissionsRequest;

class DescribeWorkspaceImagePermissionsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeWorkspaceImagePermissionsRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeWorkspaceImagePermissionsRequest * const q);
    DescribeWorkspaceImagePermissionsRequestPrivate(const DescribeWorkspaceImagePermissionsRequestPrivate &other,
                                   DescribeWorkspaceImagePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceImagePermissionsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
