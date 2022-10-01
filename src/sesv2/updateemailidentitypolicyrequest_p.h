// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMAILIDENTITYPOLICYREQUEST_P_H
#define QTAWS_UPDATEEMAILIDENTITYPOLICYREQUEST_P_H

#include "sesv2request_p.h"
#include "updateemailidentitypolicyrequest.h"

namespace QtAws {
namespace SESv2 {

class UpdateEmailIdentityPolicyRequest;

class UpdateEmailIdentityPolicyRequestPrivate : public SESv2RequestPrivate {

public:
    UpdateEmailIdentityPolicyRequestPrivate(const SESv2Request::Action action,
                                   UpdateEmailIdentityPolicyRequest * const q);
    UpdateEmailIdentityPolicyRequestPrivate(const UpdateEmailIdentityPolicyRequestPrivate &other,
                                   UpdateEmailIdentityPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEmailIdentityPolicyRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
