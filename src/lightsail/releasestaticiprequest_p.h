// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASESTATICIPREQUEST_P_H
#define QTAWS_RELEASESTATICIPREQUEST_P_H

#include "lightsailrequest_p.h"
#include "releasestaticiprequest.h"

namespace QtAws {
namespace Lightsail {

class ReleaseStaticIpRequest;

class ReleaseStaticIpRequestPrivate : public LightsailRequestPrivate {

public:
    ReleaseStaticIpRequestPrivate(const LightsailRequest::Action action,
                                   ReleaseStaticIpRequest * const q);
    ReleaseStaticIpRequestPrivate(const ReleaseStaticIpRequestPrivate &other,
                                   ReleaseStaticIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReleaseStaticIpRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
