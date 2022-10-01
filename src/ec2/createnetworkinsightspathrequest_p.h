// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINSIGHTSPATHREQUEST_P_H
#define QTAWS_CREATENETWORKINSIGHTSPATHREQUEST_P_H

#include "ec2request_p.h"
#include "createnetworkinsightspathrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInsightsPathRequest;

class CreateNetworkInsightsPathRequestPrivate : public Ec2RequestPrivate {

public:
    CreateNetworkInsightsPathRequestPrivate(const Ec2Request::Action action,
                                   CreateNetworkInsightsPathRequest * const q);
    CreateNetworkInsightsPathRequestPrivate(const CreateNetworkInsightsPathRequestPrivate &other,
                                   CreateNetworkInsightsPathRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkInsightsPathRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
