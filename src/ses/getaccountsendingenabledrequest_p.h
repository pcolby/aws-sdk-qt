// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSENDINGENABLEDREQUEST_P_H
#define QTAWS_GETACCOUNTSENDINGENABLEDREQUEST_P_H

#include "sesrequest_p.h"
#include "getaccountsendingenabledrequest.h"

namespace QtAws {
namespace Ses {

class GetAccountSendingEnabledRequest;

class GetAccountSendingEnabledRequestPrivate : public SesRequestPrivate {

public:
    GetAccountSendingEnabledRequestPrivate(const SesRequest::Action action,
                                   GetAccountSendingEnabledRequest * const q);
    GetAccountSendingEnabledRequestPrivate(const GetAccountSendingEnabledRequestPrivate &other,
                                   GetAccountSendingEnabledRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountSendingEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
