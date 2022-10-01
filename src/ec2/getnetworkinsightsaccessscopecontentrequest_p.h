// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKINSIGHTSACCESSSCOPECONTENTREQUEST_P_H
#define QTAWS_GETNETWORKINSIGHTSACCESSSCOPECONTENTREQUEST_P_H

#include "ec2request_p.h"
#include "getnetworkinsightsaccessscopecontentrequest.h"

namespace QtAws {
namespace Ec2 {

class GetNetworkInsightsAccessScopeContentRequest;

class GetNetworkInsightsAccessScopeContentRequestPrivate : public Ec2RequestPrivate {

public:
    GetNetworkInsightsAccessScopeContentRequestPrivate(const Ec2Request::Action action,
                                   GetNetworkInsightsAccessScopeContentRequest * const q);
    GetNetworkInsightsAccessScopeContentRequestPrivate(const GetNetworkInsightsAccessScopeContentRequestPrivate &other,
                                   GetNetworkInsightsAccessScopeContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkInsightsAccessScopeContentRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
