// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEADMINACCOUNTREQUEST_P_H
#define QTAWS_DISASSOCIATEADMINACCOUNTREQUEST_P_H

#include "fmsrequest_p.h"
#include "disassociateadminaccountrequest.h"

namespace QtAws {
namespace Fms {

class DisassociateAdminAccountRequest;

class DisassociateAdminAccountRequestPrivate : public FmsRequestPrivate {

public:
    DisassociateAdminAccountRequestPrivate(const FmsRequest::Action action,
                                   DisassociateAdminAccountRequest * const q);
    DisassociateAdminAccountRequestPrivate(const DisassociateAdminAccountRequestPrivate &other,
                                   DisassociateAdminAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateAdminAccountRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
