// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOLOCATIONREQUEST_P_H
#define QTAWS_GETGEOLOCATIONREQUEST_P_H

#include "route53request_p.h"
#include "getgeolocationrequest.h"

namespace QtAws {
namespace Route53 {

class GetGeoLocationRequest;

class GetGeoLocationRequestPrivate : public Route53RequestPrivate {

public:
    GetGeoLocationRequestPrivate(const Route53Request::Action action,
                                   GetGeoLocationRequest * const q);
    GetGeoLocationRequestPrivate(const GetGeoLocationRequestPrivate &other,
                                   GetGeoLocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGeoLocationRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
