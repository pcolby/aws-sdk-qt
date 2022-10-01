// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERCONTACTFLOWREQUEST_P_H
#define QTAWS_ASSOCIATEPHONENUMBERCONTACTFLOWREQUEST_P_H

#include "connectrequest_p.h"
#include "associatephonenumbercontactflowrequest.h"

namespace QtAws {
namespace Connect {

class AssociatePhoneNumberContactFlowRequest;

class AssociatePhoneNumberContactFlowRequestPrivate : public ConnectRequestPrivate {

public:
    AssociatePhoneNumberContactFlowRequestPrivate(const ConnectRequest::Action action,
                                   AssociatePhoneNumberContactFlowRequest * const q);
    AssociatePhoneNumberContactFlowRequestPrivate(const AssociatePhoneNumberContactFlowRequestPrivate &other,
                                   AssociatePhoneNumberContactFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociatePhoneNumberContactFlowRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
