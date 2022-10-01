// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEBUNDLESREQUEST_P_H
#define QTAWS_DESCRIBEWORKSPACEBUNDLESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeworkspacebundlesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceBundlesRequest;

class DescribeWorkspaceBundlesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeWorkspaceBundlesRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeWorkspaceBundlesRequest * const q);
    DescribeWorkspaceBundlesRequestPrivate(const DescribeWorkspaceBundlesRequestPrivate &other,
                                   DescribeWorkspaceBundlesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceBundlesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
