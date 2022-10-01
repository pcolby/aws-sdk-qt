// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINREQUEST_P_H
#define QTAWS_GETDOMAINREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getdomainrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDomainRequest;

class GetDomainRequestPrivate : public LightsailRequestPrivate {

public:
    GetDomainRequestPrivate(const LightsailRequest::Action action,
                                   GetDomainRequest * const q);
    GetDomainRequestPrivate(const GetDomainRequestPrivate &other,
                                   GetDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
