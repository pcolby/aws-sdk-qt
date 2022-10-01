// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMSSANDBOXPHONENUMBERREQUEST_P_H
#define QTAWS_CREATESMSSANDBOXPHONENUMBERREQUEST_P_H

#include "snsrequest_p.h"
#include "createsmssandboxphonenumberrequest.h"

namespace QtAws {
namespace Sns {

class CreateSMSSandboxPhoneNumberRequest;

class CreateSMSSandboxPhoneNumberRequestPrivate : public SnsRequestPrivate {

public:
    CreateSMSSandboxPhoneNumberRequestPrivate(const SnsRequest::Action action,
                                   CreateSMSSandboxPhoneNumberRequest * const q);
    CreateSMSSandboxPhoneNumberRequestPrivate(const CreateSMSSandboxPhoneNumberRequestPrivate &other,
                                   CreateSMSSandboxPhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSMSSandboxPhoneNumberRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
