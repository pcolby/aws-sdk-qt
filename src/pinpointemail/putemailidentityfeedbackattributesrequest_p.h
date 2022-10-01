// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESREQUEST_P_H
#define QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "putemailidentityfeedbackattributesrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutEmailIdentityFeedbackAttributesRequest;

class PutEmailIdentityFeedbackAttributesRequestPrivate : public PinpointEmailRequestPrivate {

public:
    PutEmailIdentityFeedbackAttributesRequestPrivate(const PinpointEmailRequest::Action action,
                                   PutEmailIdentityFeedbackAttributesRequest * const q);
    PutEmailIdentityFeedbackAttributesRequestPrivate(const PutEmailIdentityFeedbackAttributesRequestPrivate &other,
                                   PutEmailIdentityFeedbackAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityFeedbackAttributesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
