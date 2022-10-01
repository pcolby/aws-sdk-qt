// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYSMSSANDBOXPHONENUMBERREQUEST_P_H
#define QTAWS_VERIFYSMSSANDBOXPHONENUMBERREQUEST_P_H

#include "snsrequest_p.h"
#include "verifysmssandboxphonenumberrequest.h"

namespace QtAws {
namespace Sns {

class VerifySMSSandboxPhoneNumberRequest;

class VerifySMSSandboxPhoneNumberRequestPrivate : public SnsRequestPrivate {

public:
    VerifySMSSandboxPhoneNumberRequestPrivate(const SnsRequest::Action action,
                                   VerifySMSSandboxPhoneNumberRequest * const q);
    VerifySMSSandboxPhoneNumberRequestPrivate(const VerifySMSSandboxPhoneNumberRequestPrivate &other,
                                   VerifySMSSandboxPhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifySMSSandboxPhoneNumberRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
