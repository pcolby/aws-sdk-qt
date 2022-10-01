// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILIDENTITYPOLICYREQUEST_P_H
#define QTAWS_DELETEEMAILIDENTITYPOLICYREQUEST_P_H

#include "sesv2request_p.h"
#include "deleteemailidentitypolicyrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteEmailIdentityPolicyRequest;

class DeleteEmailIdentityPolicyRequestPrivate : public SESv2RequestPrivate {

public:
    DeleteEmailIdentityPolicyRequestPrivate(const SESv2Request::Action action,
                                   DeleteEmailIdentityPolicyRequest * const q);
    DeleteEmailIdentityPolicyRequestPrivate(const DeleteEmailIdentityPolicyRequestPrivate &other,
                                   DeleteEmailIdentityPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEmailIdentityPolicyRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
