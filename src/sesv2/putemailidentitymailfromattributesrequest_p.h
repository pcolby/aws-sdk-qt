// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYMAILFROMATTRIBUTESREQUEST_P_H
#define QTAWS_PUTEMAILIDENTITYMAILFROMATTRIBUTESREQUEST_P_H

#include "sesv2request_p.h"
#include "putemailidentitymailfromattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityMailFromAttributesRequest;

class PutEmailIdentityMailFromAttributesRequestPrivate : public SESv2RequestPrivate {

public:
    PutEmailIdentityMailFromAttributesRequestPrivate(const SESv2Request::Action action,
                                   PutEmailIdentityMailFromAttributesRequest * const q);
    PutEmailIdentityMailFromAttributesRequestPrivate(const PutEmailIdentityMailFromAttributesRequestPrivate &other,
                                   PutEmailIdentityMailFromAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityMailFromAttributesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
