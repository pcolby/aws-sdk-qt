// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONSREQUEST_P_H
#define QTAWS_GETDISTRIBUTIONSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getdistributionsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionsRequest;

class GetDistributionsRequestPrivate : public LightsailRequestPrivate {

public:
    GetDistributionsRequestPrivate(const LightsailRequest::Action action,
                                   GetDistributionsRequest * const q);
    GetDistributionsRequestPrivate(const GetDistributionsRequestPrivate &other,
                                   GetDistributionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDistributionsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
