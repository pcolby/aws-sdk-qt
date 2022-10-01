// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDIAGNOSTICINTERRUPTREQUEST_P_H
#define QTAWS_SENDDIAGNOSTICINTERRUPTREQUEST_P_H

#include "ec2request_p.h"
#include "senddiagnosticinterruptrequest.h"

namespace QtAws {
namespace Ec2 {

class SendDiagnosticInterruptRequest;

class SendDiagnosticInterruptRequestPrivate : public Ec2RequestPrivate {

public:
    SendDiagnosticInterruptRequestPrivate(const Ec2Request::Action action,
                                   SendDiagnosticInterruptRequest * const q);
    SendDiagnosticInterruptRequestPrivate(const SendDiagnosticInterruptRequestPrivate &other,
                                   SendDiagnosticInterruptRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendDiagnosticInterruptRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
