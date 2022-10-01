// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMMASTERACCOUNTREQUEST_P_H
#define QTAWS_DISASSOCIATEFROMMASTERACCOUNTREQUEST_P_H

#include "securityhubrequest_p.h"
#include "disassociatefrommasteraccountrequest.h"

namespace QtAws {
namespace SecurityHub {

class DisassociateFromMasterAccountRequest;

class DisassociateFromMasterAccountRequestPrivate : public SecurityHubRequestPrivate {

public:
    DisassociateFromMasterAccountRequestPrivate(const SecurityHubRequest::Action action,
                                   DisassociateFromMasterAccountRequest * const q);
    DisassociateFromMasterAccountRequestPrivate(const DisassociateFromMasterAccountRequestPrivate &other,
                                   DisassociateFromMasterAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateFromMasterAccountRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
