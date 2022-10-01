// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEAPPREQUEST_P_H
#define QTAWS_TERMINATEAPPREQUEST_P_H

#include "smsrequest_p.h"
#include "terminateapprequest.h"

namespace QtAws {
namespace Sms {

class TerminateAppRequest;

class TerminateAppRequestPrivate : public SmsRequestPrivate {

public:
    TerminateAppRequestPrivate(const SmsRequest::Action action,
                                   TerminateAppRequest * const q);
    TerminateAppRequestPrivate(const TerminateAppRequestPrivate &other,
                                   TerminateAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateAppRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
