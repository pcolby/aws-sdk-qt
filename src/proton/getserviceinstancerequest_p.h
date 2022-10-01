// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEINSTANCEREQUEST_P_H
#define QTAWS_GETSERVICEINSTANCEREQUEST_P_H

#include "protonrequest_p.h"
#include "getserviceinstancerequest.h"

namespace QtAws {
namespace Proton {

class GetServiceInstanceRequest;

class GetServiceInstanceRequestPrivate : public ProtonRequestPrivate {

public:
    GetServiceInstanceRequestPrivate(const ProtonRequest::Action action,
                                   GetServiceInstanceRequest * const q);
    GetServiceInstanceRequestPrivate(const GetServiceInstanceRequestPrivate &other,
                                   GetServiceInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceInstanceRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
