// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESCONNECTIONSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEWORKSPACESCONNECTIONSTATUSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeworkspacesconnectionstatusrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspacesConnectionStatusRequest;

class DescribeWorkspacesConnectionStatusRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeWorkspacesConnectionStatusRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeWorkspacesConnectionStatusRequest * const q);
    DescribeWorkspacesConnectionStatusRequestPrivate(const DescribeWorkspacesConnectionStatusRequestPrivate &other,
                                   DescribeWorkspacesConnectionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspacesConnectionStatusRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
