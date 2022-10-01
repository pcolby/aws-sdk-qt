// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPOLICYREQUEST_P_H
#define QTAWS_DELETEIDENTITYPOLICYREQUEST_P_H

#include "sesrequest_p.h"
#include "deleteidentitypolicyrequest.h"

namespace QtAws {
namespace Ses {

class DeleteIdentityPolicyRequest;

class DeleteIdentityPolicyRequestPrivate : public SesRequestPrivate {

public:
    DeleteIdentityPolicyRequestPrivate(const SesRequest::Action action,
                                   DeleteIdentityPolicyRequest * const q);
    DeleteIdentityPolicyRequestPrivate(const DeleteIdentityPolicyRequestPrivate &other,
                                   DeleteIdentityPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIdentityPolicyRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
