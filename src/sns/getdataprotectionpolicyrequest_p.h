// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAPROTECTIONPOLICYREQUEST_P_H
#define QTAWS_GETDATAPROTECTIONPOLICYREQUEST_P_H

#include "snsrequest_p.h"
#include "getdataprotectionpolicyrequest.h"

namespace QtAws {
namespace Sns {

class GetDataProtectionPolicyRequest;

class GetDataProtectionPolicyRequestPrivate : public SnsRequestPrivate {

public:
    GetDataProtectionPolicyRequestPrivate(const SnsRequest::Action action,
                                   GetDataProtectionPolicyRequest * const q);
    GetDataProtectionPolicyRequestPrivate(const GetDataProtectionPolicyRequestPrivate &other,
                                   GetDataProtectionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataProtectionPolicyRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
