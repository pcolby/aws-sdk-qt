// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPOLICYREQUEST_P_H
#define QTAWS_PUTPOLICYREQUEST_P_H

#include "fmsrequest_p.h"
#include "putpolicyrequest.h"

namespace QtAws {
namespace Fms {

class PutPolicyRequest;

class PutPolicyRequestPrivate : public FmsRequestPrivate {

public:
    PutPolicyRequestPrivate(const FmsRequest::Action action,
                                   PutPolicyRequest * const q);
    PutPolicyRequestPrivate(const PutPolicyRequestPrivate &other,
                                   PutPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPolicyRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
