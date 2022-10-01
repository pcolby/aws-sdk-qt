// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSPATHREQUEST_P_H
#define QTAWS_DELETENETWORKINSIGHTSPATHREQUEST_P_H

#include "ec2request_p.h"
#include "deletenetworkinsightspathrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsPathRequest;

class DeleteNetworkInsightsPathRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteNetworkInsightsPathRequestPrivate(const Ec2Request::Action action,
                                   DeleteNetworkInsightsPathRequest * const q);
    DeleteNetworkInsightsPathRequestPrivate(const DeleteNetworkInsightsPathRequestPrivate &other,
                                   DeleteNetworkInsightsPathRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInsightsPathRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
