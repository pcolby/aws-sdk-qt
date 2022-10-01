// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEDEPLOYMENTSREQUEST_P_H
#define QTAWS_GETCONTAINERSERVICEDEPLOYMENTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getcontainerservicedeploymentsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServiceDeploymentsRequest;

class GetContainerServiceDeploymentsRequestPrivate : public LightsailRequestPrivate {

public:
    GetContainerServiceDeploymentsRequestPrivate(const LightsailRequest::Action action,
                                   GetContainerServiceDeploymentsRequest * const q);
    GetContainerServiceDeploymentsRequestPrivate(const GetContainerServiceDeploymentsRequestPrivate &other,
                                   GetContainerServiceDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContainerServiceDeploymentsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
