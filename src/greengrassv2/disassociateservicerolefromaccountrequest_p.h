// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTREQUEST_P_H
#define QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTREQUEST_P_H

#include "greengrassv2request_p.h"
#include "disassociateservicerolefromaccountrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class DisassociateServiceRoleFromAccountRequest;

class DisassociateServiceRoleFromAccountRequestPrivate : public GreengrassV2RequestPrivate {

public:
    DisassociateServiceRoleFromAccountRequestPrivate(const GreengrassV2Request::Action action,
                                   DisassociateServiceRoleFromAccountRequest * const q);
    DisassociateServiceRoleFromAccountRequestPrivate(const DisassociateServiceRoleFromAccountRequestPrivate &other,
                                   DisassociateServiceRoleFromAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateServiceRoleFromAccountRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
