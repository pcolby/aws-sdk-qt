// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMMASTERACCOUNTREQUEST_P_H
#define QTAWS_DISASSOCIATEFROMMASTERACCOUNTREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "disassociatefrommasteraccountrequest.h"

namespace QtAws {
namespace GuardDuty {

class DisassociateFromMasterAccountRequest;

class DisassociateFromMasterAccountRequestPrivate : public GuardDutyRequestPrivate {

public:
    DisassociateFromMasterAccountRequestPrivate(const GuardDutyRequest::Action action,
                                   DisassociateFromMasterAccountRequest * const q);
    DisassociateFromMasterAccountRequestPrivate(const DisassociateFromMasterAccountRequestPrivate &other,
                                   DisassociateFromMasterAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateFromMasterAccountRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
