// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILIDENTITYREQUEST_P_H
#define QTAWS_CREATEEMAILIDENTITYREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "createemailidentityrequest.h"

namespace QtAws {
namespace PinpointEmail {

class CreateEmailIdentityRequest;

class CreateEmailIdentityRequestPrivate : public PinpointEmailRequestPrivate {

public:
    CreateEmailIdentityRequestPrivate(const PinpointEmailRequest::Action action,
                                   CreateEmailIdentityRequest * const q);
    CreateEmailIdentityRequestPrivate(const CreateEmailIdentityRequestPrivate &other,
                                   CreateEmailIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEmailIdentityRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
