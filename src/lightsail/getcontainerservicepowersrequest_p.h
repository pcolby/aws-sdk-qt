// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEPOWERSREQUEST_P_H
#define QTAWS_GETCONTAINERSERVICEPOWERSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getcontainerservicepowersrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServicePowersRequest;

class GetContainerServicePowersRequestPrivate : public LightsailRequestPrivate {

public:
    GetContainerServicePowersRequestPrivate(const LightsailRequest::Action action,
                                   GetContainerServicePowersRequest * const q);
    GetContainerServicePowersRequestPrivate(const GetContainerServicePowersRequestPrivate &other,
                                   GetContainerServicePowersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContainerServicePowersRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
