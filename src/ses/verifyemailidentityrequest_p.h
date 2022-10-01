// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYEMAILIDENTITYREQUEST_P_H
#define QTAWS_VERIFYEMAILIDENTITYREQUEST_P_H

#include "sesrequest_p.h"
#include "verifyemailidentityrequest.h"

namespace QtAws {
namespace Ses {

class VerifyEmailIdentityRequest;

class VerifyEmailIdentityRequestPrivate : public SesRequestPrivate {

public:
    VerifyEmailIdentityRequestPrivate(const SesRequest::Action action,
                                   VerifyEmailIdentityRequest * const q);
    VerifyEmailIdentityRequestPrivate(const VerifyEmailIdentityRequestPrivate &other,
                                   VerifyEmailIdentityRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifyEmailIdentityRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
