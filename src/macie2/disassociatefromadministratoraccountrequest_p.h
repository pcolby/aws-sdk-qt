// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTREQUEST_P_H
#define QTAWS_DISASSOCIATEFROMADMINISTRATORACCOUNTREQUEST_P_H

#include "macie2request_p.h"
#include "disassociatefromadministratoraccountrequest.h"

namespace QtAws {
namespace Macie2 {

class DisassociateFromAdministratorAccountRequest;

class DisassociateFromAdministratorAccountRequestPrivate : public Macie2RequestPrivate {

public:
    DisassociateFromAdministratorAccountRequestPrivate(const Macie2Request::Action action,
                                   DisassociateFromAdministratorAccountRequest * const q);
    DisassociateFromAdministratorAccountRequestPrivate(const DisassociateFromAdministratorAccountRequestPrivate &other,
                                   DisassociateFromAdministratorAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateFromAdministratorAccountRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
