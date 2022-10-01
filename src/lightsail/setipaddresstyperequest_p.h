// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIPADDRESSTYPEREQUEST_P_H
#define QTAWS_SETIPADDRESSTYPEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "setipaddresstyperequest.h"

namespace QtAws {
namespace Lightsail {

class SetIpAddressTypeRequest;

class SetIpAddressTypeRequestPrivate : public LightsailRequestPrivate {

public:
    SetIpAddressTypeRequestPrivate(const LightsailRequest::Action action,
                                   SetIpAddressTypeRequest * const q);
    SetIpAddressTypeRequestPrivate(const SetIpAddressTypeRequestPrivate &other,
                                   SetIpAddressTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetIpAddressTypeRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
