// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYPOLICYREQUEST_P_H
#define QTAWS_GETKEYPOLICYREQUEST_P_H

#include "kmsrequest_p.h"
#include "getkeypolicyrequest.h"

namespace QtAws {
namespace Kms {

class GetKeyPolicyRequest;

class GetKeyPolicyRequestPrivate : public KmsRequestPrivate {

public:
    GetKeyPolicyRequestPrivate(const KmsRequest::Action action,
                                   GetKeyPolicyRequest * const q);
    GetKeyPolicyRequestPrivate(const GetKeyPolicyRequestPrivate &other,
                                   GetKeyPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetKeyPolicyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
