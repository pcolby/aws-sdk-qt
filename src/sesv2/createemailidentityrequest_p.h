// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILIDENTITYREQUEST_P_H
#define QTAWS_CREATEEMAILIDENTITYREQUEST_P_H

#include "sesv2request_p.h"
#include "createemailidentityrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateEmailIdentityRequest;

class CreateEmailIdentityRequestPrivate : public SESv2RequestPrivate {

public:
    CreateEmailIdentityRequestPrivate(const SESv2Request::Action action,
                                   CreateEmailIdentityRequest * const q);
    CreateEmailIdentityRequestPrivate(const CreateEmailIdentityRequestPrivate &other,
                                   CreateEmailIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEmailIdentityRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
