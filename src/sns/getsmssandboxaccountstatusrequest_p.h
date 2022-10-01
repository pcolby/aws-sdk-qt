// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSSANDBOXACCOUNTSTATUSREQUEST_P_H
#define QTAWS_GETSMSSANDBOXACCOUNTSTATUSREQUEST_P_H

#include "snsrequest_p.h"
#include "getsmssandboxaccountstatusrequest.h"

namespace QtAws {
namespace Sns {

class GetSMSSandboxAccountStatusRequest;

class GetSMSSandboxAccountStatusRequestPrivate : public SnsRequestPrivate {

public:
    GetSMSSandboxAccountStatusRequestPrivate(const SnsRequest::Action action,
                                   GetSMSSandboxAccountStatusRequest * const q);
    GetSMSSandboxAccountStatusRequestPrivate(const GetSMSSandboxAccountStatusRequestPrivate &other,
                                   GetSMSSandboxAccountStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSMSSandboxAccountStatusRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
