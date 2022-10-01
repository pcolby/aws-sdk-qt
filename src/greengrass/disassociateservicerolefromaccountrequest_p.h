// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTREQUEST_P_H
#define QTAWS_DISASSOCIATESERVICEROLEFROMACCOUNTREQUEST_P_H

#include "greengrassrequest_p.h"
#include "disassociateservicerolefromaccountrequest.h"

namespace QtAws {
namespace Greengrass {

class DisassociateServiceRoleFromAccountRequest;

class DisassociateServiceRoleFromAccountRequestPrivate : public GreengrassRequestPrivate {

public:
    DisassociateServiceRoleFromAccountRequestPrivate(const GreengrassRequest::Action action,
                                   DisassociateServiceRoleFromAccountRequest * const q);
    DisassociateServiceRoleFromAccountRequestPrivate(const DisassociateServiceRoleFromAccountRequestPrivate &other,
                                   DisassociateServiceRoleFromAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateServiceRoleFromAccountRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
