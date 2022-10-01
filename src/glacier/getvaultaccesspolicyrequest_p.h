// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVAULTACCESSPOLICYREQUEST_P_H
#define QTAWS_GETVAULTACCESSPOLICYREQUEST_P_H

#include "glacierrequest_p.h"
#include "getvaultaccesspolicyrequest.h"

namespace QtAws {
namespace Glacier {

class GetVaultAccessPolicyRequest;

class GetVaultAccessPolicyRequestPrivate : public GlacierRequestPrivate {

public:
    GetVaultAccessPolicyRequestPrivate(const GlacierRequest::Action action,
                                   GetVaultAccessPolicyRequest * const q);
    GetVaultAccessPolicyRequestPrivate(const GetVaultAccessPolicyRequestPrivate &other,
                                   GetVaultAccessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVaultAccessPolicyRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
