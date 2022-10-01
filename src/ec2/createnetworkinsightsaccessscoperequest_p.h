// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINSIGHTSACCESSSCOPEREQUEST_P_H
#define QTAWS_CREATENETWORKINSIGHTSACCESSSCOPEREQUEST_P_H

#include "ec2request_p.h"
#include "createnetworkinsightsaccessscoperequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInsightsAccessScopeRequest;

class CreateNetworkInsightsAccessScopeRequestPrivate : public Ec2RequestPrivate {

public:
    CreateNetworkInsightsAccessScopeRequestPrivate(const Ec2Request::Action action,
                                   CreateNetworkInsightsAccessScopeRequest * const q);
    CreateNetworkInsightsAccessScopeRequestPrivate(const CreateNetworkInsightsAccessScopeRequestPrivate &other,
                                   CreateNetworkInsightsAccessScopeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkInsightsAccessScopeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
