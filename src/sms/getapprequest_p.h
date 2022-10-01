// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPREQUEST_P_H
#define QTAWS_GETAPPREQUEST_P_H

#include "smsrequest_p.h"
#include "getapprequest.h"

namespace QtAws {
namespace Sms {

class GetAppRequest;

class GetAppRequestPrivate : public SmsRequestPrivate {

public:
    GetAppRequestPrivate(const SmsRequest::Action action,
                                   GetAppRequest * const q);
    GetAppRequestPrivate(const GetAppRequestPrivate &other,
                                   GetAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
