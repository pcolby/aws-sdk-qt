// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORSREQUEST_P_H
#define QTAWS_GETCONNECTORSREQUEST_P_H

#include "smsrequest_p.h"
#include "getconnectorsrequest.h"

namespace QtAws {
namespace Sms {

class GetConnectorsRequest;

class GetConnectorsRequestPrivate : public SmsRequestPrivate {

public:
    GetConnectorsRequestPrivate(const SmsRequest::Action action,
                                   GetConnectorsRequest * const q);
    GetConnectorsRequestPrivate(const GetConnectorsRequestPrivate &other,
                                   GetConnectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectorsRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
