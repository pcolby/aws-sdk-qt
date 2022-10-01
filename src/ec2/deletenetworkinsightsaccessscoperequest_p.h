// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEREQUEST_P_H
#define QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEREQUEST_P_H

#include "ec2request_p.h"
#include "deletenetworkinsightsaccessscoperequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAccessScopeRequest;

class DeleteNetworkInsightsAccessScopeRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteNetworkInsightsAccessScopeRequestPrivate(const Ec2Request::Action action,
                                   DeleteNetworkInsightsAccessScopeRequest * const q);
    DeleteNetworkInsightsAccessScopeRequestPrivate(const DeleteNetworkInsightsAccessScopeRequestPrivate &other,
                                   DeleteNetworkInsightsAccessScopeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInsightsAccessScopeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
