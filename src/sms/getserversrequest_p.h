// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERSREQUEST_P_H
#define QTAWS_GETSERVERSREQUEST_P_H

#include "smsrequest_p.h"
#include "getserversrequest.h"

namespace QtAws {
namespace Sms {

class GetServersRequest;

class GetServersRequestPrivate : public SmsRequestPrivate {

public:
    GetServersRequestPrivate(const SmsRequest::Action action,
                                   GetServersRequest * const q);
    GetServersRequestPrivate(const GetServersRequestPrivate &other,
                                   GetServersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServersRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
