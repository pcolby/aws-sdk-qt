// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERCONTACTFLOWREQUEST_P_H
#define QTAWS_DISASSOCIATEPHONENUMBERCONTACTFLOWREQUEST_P_H

#include "connectrequest_p.h"
#include "disassociatephonenumbercontactflowrequest.h"

namespace QtAws {
namespace Connect {

class DisassociatePhoneNumberContactFlowRequest;

class DisassociatePhoneNumberContactFlowRequestPrivate : public ConnectRequestPrivate {

public:
    DisassociatePhoneNumberContactFlowRequestPrivate(const ConnectRequest::Action action,
                                   DisassociatePhoneNumberContactFlowRequest * const q);
    DisassociatePhoneNumberContactFlowRequestPrivate(const DisassociatePhoneNumberContactFlowRequestPrivate &other,
                                   DisassociatePhoneNumberContactFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociatePhoneNumberContactFlowRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
