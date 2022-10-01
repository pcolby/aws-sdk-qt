// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESREQUEST_P_H
#define QTAWS_PUTEMAILIDENTITYFEEDBACKATTRIBUTESREQUEST_P_H

#include "sesv2request_p.h"
#include "putemailidentityfeedbackattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityFeedbackAttributesRequest;

class PutEmailIdentityFeedbackAttributesRequestPrivate : public SESv2RequestPrivate {

public:
    PutEmailIdentityFeedbackAttributesRequestPrivate(const SESv2Request::Action action,
                                   PutEmailIdentityFeedbackAttributesRequest * const q);
    PutEmailIdentityFeedbackAttributesRequestPrivate(const PutEmailIdentityFeedbackAttributesRequestPrivate &other,
                                   PutEmailIdentityFeedbackAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityFeedbackAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
