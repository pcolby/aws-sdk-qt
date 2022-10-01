// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILIDENTITYREQUEST_P_H
#define QTAWS_GETEMAILIDENTITYREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getemailidentityrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetEmailIdentityRequest;

class GetEmailIdentityRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetEmailIdentityRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetEmailIdentityRequest * const q);
    GetEmailIdentityRequestPrivate(const GetEmailIdentityRequestPrivate &other,
                                   GetEmailIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEmailIdentityRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
