// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTORREQUEST_P_H
#define QTAWS_DISASSOCIATECONNECTORREQUEST_P_H

#include "smsrequest_p.h"
#include "disassociateconnectorrequest.h"

namespace QtAws {
namespace Sms {

class DisassociateConnectorRequest;

class DisassociateConnectorRequestPrivate : public SmsRequestPrivate {

public:
    DisassociateConnectorRequestPrivate(const SmsRequest::Action action,
                                   DisassociateConnectorRequest * const q);
    DisassociateConnectorRequestPrivate(const DisassociateConnectorRequestPrivate &other,
                                   DisassociateConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateConnectorRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
