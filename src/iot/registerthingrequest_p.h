// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTHINGREQUEST_P_H
#define QTAWS_REGISTERTHINGREQUEST_P_H

#include "iotrequest_p.h"
#include "registerthingrequest.h"

namespace QtAws {
namespace IoT {

class RegisterThingRequest;

class RegisterThingRequestPrivate : public IoTRequestPrivate {

public:
    RegisterThingRequestPrivate(const IoTRequest::Action action,
                                   RegisterThingRequest * const q);
    RegisterThingRequestPrivate(const RegisterThingRequestPrivate &other,
                                   RegisterThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
