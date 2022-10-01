// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCEREQUEST_P_H
#define QTAWS_REGISTERINSTANCEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "registerinstancerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class RegisterInstanceRequest;

class RegisterInstanceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    RegisterInstanceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   RegisterInstanceRequest * const q);
    RegisterInstanceRequestPrivate(const RegisterInstanceRequestPrivate &other,
                                   RegisterInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterInstanceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
