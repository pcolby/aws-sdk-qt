// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONBYOIPCIDRREQUEST_P_H
#define QTAWS_PROVISIONBYOIPCIDRREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "provisionbyoipcidrrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ProvisionByoipCidrRequest;

class ProvisionByoipCidrRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    ProvisionByoipCidrRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   ProvisionByoipCidrRequest * const q);
    ProvisionByoipCidrRequestPrivate(const ProvisionByoipCidrRequestPrivate &other,
                                   ProvisionByoipCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(ProvisionByoipCidrRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
