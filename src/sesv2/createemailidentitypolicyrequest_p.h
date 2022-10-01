// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILIDENTITYPOLICYREQUEST_P_H
#define QTAWS_CREATEEMAILIDENTITYPOLICYREQUEST_P_H

#include "sesv2request_p.h"
#include "createemailidentitypolicyrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateEmailIdentityPolicyRequest;

class CreateEmailIdentityPolicyRequestPrivate : public SESv2RequestPrivate {

public:
    CreateEmailIdentityPolicyRequestPrivate(const SESv2Request::Action action,
                                   CreateEmailIdentityPolicyRequest * const q);
    CreateEmailIdentityPolicyRequestPrivate(const CreateEmailIdentityPolicyRequestPrivate &other,
                                   CreateEmailIdentityPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEmailIdentityPolicyRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
