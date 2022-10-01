// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHSTATICIPREQUEST_P_H
#define QTAWS_ATTACHSTATICIPREQUEST_P_H

#include "lightsailrequest_p.h"
#include "attachstaticiprequest.h"

namespace QtAws {
namespace Lightsail {

class AttachStaticIpRequest;

class AttachStaticIpRequestPrivate : public LightsailRequestPrivate {

public:
    AttachStaticIpRequestPrivate(const LightsailRequest::Action action,
                                   AttachStaticIpRequest * const q);
    AttachStaticIpRequestPrivate(const AttachStaticIpRequestPrivate &other,
                                   AttachStaticIpRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachStaticIpRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
