// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKEYPOLICYREQUEST_P_H
#define QTAWS_PUTKEYPOLICYREQUEST_P_H

#include "kmsrequest_p.h"
#include "putkeypolicyrequest.h"

namespace QtAws {
namespace Kms {

class PutKeyPolicyRequest;

class PutKeyPolicyRequestPrivate : public KmsRequestPrivate {

public:
    PutKeyPolicyRequestPrivate(const KmsRequest::Action action,
                                   PutKeyPolicyRequest * const q);
    PutKeyPolicyRequestPrivate(const PutKeyPolicyRequestPrivate &other,
                                   PutKeyPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutKeyPolicyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
