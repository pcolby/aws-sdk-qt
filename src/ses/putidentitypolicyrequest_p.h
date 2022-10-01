// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIDENTITYPOLICYREQUEST_P_H
#define QTAWS_PUTIDENTITYPOLICYREQUEST_P_H

#include "sesrequest_p.h"
#include "putidentitypolicyrequest.h"

namespace QtAws {
namespace Ses {

class PutIdentityPolicyRequest;

class PutIdentityPolicyRequestPrivate : public SesRequestPrivate {

public:
    PutIdentityPolicyRequestPrivate(const SesRequest::Action action,
                                   PutIdentityPolicyRequest * const q);
    PutIdentityPolicyRequestPrivate(const PutIdentityPolicyRequestPrivate &other,
                                   PutIdentityPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutIdentityPolicyRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
