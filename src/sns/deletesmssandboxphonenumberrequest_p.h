// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESMSSANDBOXPHONENUMBERREQUEST_P_H
#define QTAWS_DELETESMSSANDBOXPHONENUMBERREQUEST_P_H

#include "snsrequest_p.h"
#include "deletesmssandboxphonenumberrequest.h"

namespace QtAws {
namespace Sns {

class DeleteSMSSandboxPhoneNumberRequest;

class DeleteSMSSandboxPhoneNumberRequestPrivate : public SnsRequestPrivate {

public:
    DeleteSMSSandboxPhoneNumberRequestPrivate(const SnsRequest::Action action,
                                   DeleteSMSSandboxPhoneNumberRequest * const q);
    DeleteSMSSandboxPhoneNumberRequestPrivate(const DeleteSMSSandboxPhoneNumberRequestPrivate &other,
                                   DeleteSMSSandboxPhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSMSSandboxPhoneNumberRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
