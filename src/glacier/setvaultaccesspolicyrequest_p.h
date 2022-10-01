// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVAULTACCESSPOLICYREQUEST_P_H
#define QTAWS_SETVAULTACCESSPOLICYREQUEST_P_H

#include "glacierrequest_p.h"
#include "setvaultaccesspolicyrequest.h"

namespace QtAws {
namespace Glacier {

class SetVaultAccessPolicyRequest;

class SetVaultAccessPolicyRequestPrivate : public GlacierRequestPrivate {

public:
    SetVaultAccessPolicyRequestPrivate(const GlacierRequest::Action action,
                                   SetVaultAccessPolicyRequest * const q);
    SetVaultAccessPolicyRequestPrivate(const SetVaultAccessPolicyRequestPrivate &other,
                                   SetVaultAccessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetVaultAccessPolicyRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
