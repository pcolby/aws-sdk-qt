// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMMASTERACCOUNTREQUEST_P_H
#define QTAWS_DISASSOCIATEFROMMASTERACCOUNTREQUEST_P_H

#include "macie2request_p.h"
#include "disassociatefrommasteraccountrequest.h"

namespace QtAws {
namespace Macie2 {

class DisassociateFromMasterAccountRequest;

class DisassociateFromMasterAccountRequestPrivate : public Macie2RequestPrivate {

public:
    DisassociateFromMasterAccountRequestPrivate(const Macie2Request::Action action,
                                   DisassociateFromMasterAccountRequest * const q);
    DisassociateFromMasterAccountRequestPrivate(const DisassociateFromMasterAccountRequestPrivate &other,
                                   DisassociateFromMasterAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateFromMasterAccountRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
