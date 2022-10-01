// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEREQUEST_P_H
#define QTAWS_GETSERVICEREQUEST_P_H

#include "protonrequest_p.h"
#include "getservicerequest.h"

namespace QtAws {
namespace Proton {

class GetServiceRequest;

class GetServiceRequestPrivate : public ProtonRequestPrivate {

public:
    GetServiceRequestPrivate(const ProtonRequest::Action action,
                                   GetServiceRequest * const q);
    GetServiceRequestPrivate(const GetServiceRequestPrivate &other,
                                   GetServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
