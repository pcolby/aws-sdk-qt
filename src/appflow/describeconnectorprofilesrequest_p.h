// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORPROFILESREQUEST_P_H
#define QTAWS_DESCRIBECONNECTORPROFILESREQUEST_P_H

#include "appflowrequest_p.h"
#include "describeconnectorprofilesrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeConnectorProfilesRequest;

class DescribeConnectorProfilesRequestPrivate : public AppflowRequestPrivate {

public:
    DescribeConnectorProfilesRequestPrivate(const AppflowRequest::Action action,
                                   DescribeConnectorProfilesRequest * const q);
    DescribeConnectorProfilesRequestPrivate(const DescribeConnectorProfilesRequestPrivate &other,
                                   DescribeConnectorProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectorProfilesRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
