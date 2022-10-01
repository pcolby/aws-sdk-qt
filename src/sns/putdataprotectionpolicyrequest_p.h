// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDATAPROTECTIONPOLICYREQUEST_P_H
#define QTAWS_PUTDATAPROTECTIONPOLICYREQUEST_P_H

#include "snsrequest_p.h"
#include "putdataprotectionpolicyrequest.h"

namespace QtAws {
namespace Sns {

class PutDataProtectionPolicyRequest;

class PutDataProtectionPolicyRequestPrivate : public SnsRequestPrivate {

public:
    PutDataProtectionPolicyRequestPrivate(const SnsRequest::Action action,
                                   PutDataProtectionPolicyRequest * const q);
    PutDataProtectionPolicyRequestPrivate(const PutDataProtectionPolicyRequestPrivate &other,
                                   PutDataProtectionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDataProtectionPolicyRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
