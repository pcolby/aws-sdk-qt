// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEIMAGESREQUEST_P_H
#define QTAWS_DESCRIBEWORKSPACEIMAGESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeworkspaceimagesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceImagesRequest;

class DescribeWorkspaceImagesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeWorkspaceImagesRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeWorkspaceImagesRequest * const q);
    DescribeWorkspaceImagesRequestPrivate(const DescribeWorkspaceImagesRequestPrivate &other,
                                   DescribeWorkspaceImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceImagesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
