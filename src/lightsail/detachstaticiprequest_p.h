// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHSTATICIPREQUEST_P_H
#define QTAWS_DETACHSTATICIPREQUEST_P_H

#include "lightsailrequest_p.h"
#include "detachstaticiprequest.h"

namespace QtAws {
namespace Lightsail {

class DetachStaticIpRequest;

class DetachStaticIpRequestPrivate : public LightsailRequestPrivate {

public:
    DetachStaticIpRequestPrivate(const LightsailRequest::Action action,
                                   DetachStaticIpRequest * const q);
    DetachStaticIpRequestPrivate(const DetachStaticIpRequestPrivate &other,
                                   DetachStaticIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachStaticIpRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
