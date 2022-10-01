// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYMAILFROMATTRIBUTESREQUEST_P_H
#define QTAWS_PUTEMAILIDENTITYMAILFROMATTRIBUTESREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "putemailidentitymailfromattributesrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutEmailIdentityMailFromAttributesRequest;

class PutEmailIdentityMailFromAttributesRequestPrivate : public PinpointEmailRequestPrivate {

public:
    PutEmailIdentityMailFromAttributesRequestPrivate(const PinpointEmailRequest::Action action,
                                   PutEmailIdentityMailFromAttributesRequest * const q);
    PutEmailIdentityMailFromAttributesRequestPrivate(const PutEmailIdentityMailFromAttributesRequestPrivate &other,
                                   PutEmailIdentityMailFromAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityMailFromAttributesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
