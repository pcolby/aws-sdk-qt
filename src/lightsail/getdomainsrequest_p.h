// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSREQUEST_P_H
#define QTAWS_GETDOMAINSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getdomainsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDomainsRequest;

class GetDomainsRequestPrivate : public LightsailRequestPrivate {

public:
    GetDomainsRequestPrivate(const LightsailRequest::Action action,
                                   GetDomainsRequest * const q);
    GetDomainsRequestPrivate(const GetDomainsRequestPrivate &other,
                                   GetDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
