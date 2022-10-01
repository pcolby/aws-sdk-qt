// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTACCESSPOLICYREQUEST_P_H
#define QTAWS_DELETEVAULTACCESSPOLICYREQUEST_P_H

#include "glacierrequest_p.h"
#include "deletevaultaccesspolicyrequest.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultAccessPolicyRequest;

class DeleteVaultAccessPolicyRequestPrivate : public GlacierRequestPrivate {

public:
    DeleteVaultAccessPolicyRequestPrivate(const GlacierRequest::Action action,
                                   DeleteVaultAccessPolicyRequest * const q);
    DeleteVaultAccessPolicyRequestPrivate(const DeleteVaultAccessPolicyRequestPrivate &other,
                                   DeleteVaultAccessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVaultAccessPolicyRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
