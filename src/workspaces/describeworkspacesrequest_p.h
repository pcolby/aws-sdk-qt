// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESREQUEST_P_H
#define QTAWS_DESCRIBEWORKSPACESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspacesRequest;

class DescribeWorkspacesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeWorkspacesRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeWorkspacesRequest * const q);
    DescribeWorkspacesRequestPrivate(const DescribeWorkspacesRequestPrivate &other,
                                   DescribeWorkspacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
