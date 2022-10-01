// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPHONENUMBERORDERREQUEST_P_H
#define QTAWS_GETPHONENUMBERORDERREQUEST_P_H

#include "chimerequest_p.h"
#include "getphonenumberorderrequest.h"

namespace QtAws {
namespace Chime {

class GetPhoneNumberOrderRequest;

class GetPhoneNumberOrderRequestPrivate : public ChimeRequestPrivate {

public:
    GetPhoneNumberOrderRequestPrivate(const ChimeRequest::Action action,
                                   GetPhoneNumberOrderRequest * const q);
    GetPhoneNumberOrderRequestPrivate(const GetPhoneNumberOrderRequestPrivate &other,
                                   GetPhoneNumberOrderRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPhoneNumberOrderRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
