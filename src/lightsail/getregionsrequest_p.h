// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGIONSREQUEST_P_H
#define QTAWS_GETREGIONSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getregionsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRegionsRequest;

class GetRegionsRequestPrivate : public LightsailRequestPrivate {

public:
    GetRegionsRequestPrivate(const LightsailRequest::Action action,
                                   GetRegionsRequest * const q);
    GetRegionsRequestPrivate(const GetRegionsRequestPrivate &other,
                                   GetRegionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRegionsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
