// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTCLIENTADDINSREQUEST_P_H
#define QTAWS_DESCRIBECONNECTCLIENTADDINSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeconnectclientaddinsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectClientAddInsRequest;

class DescribeConnectClientAddInsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeConnectClientAddInsRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeConnectClientAddInsRequest * const q);
    DescribeConnectClientAddInsRequestPrivate(const DescribeConnectClientAddInsRequestPrivate &other,
                                   DescribeConnectClientAddInsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectClientAddInsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
