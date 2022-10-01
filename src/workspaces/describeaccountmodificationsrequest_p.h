// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTMODIFICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTMODIFICATIONSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeaccountmodificationsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeAccountModificationsRequest;

class DescribeAccountModificationsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeAccountModificationsRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeAccountModificationsRequest * const q);
    DescribeAccountModificationsRequestPrivate(const DescribeAccountModificationsRequestPrivate &other,
                                   DescribeAccountModificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountModificationsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
