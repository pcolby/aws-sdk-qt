// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESIGNINDELEGATEGROUPSFROMACCOUNTREQUEST_P_H
#define QTAWS_DISASSOCIATESIGNINDELEGATEGROUPSFROMACCOUNTREQUEST_P_H

#include "chimerequest_p.h"
#include "disassociatesignindelegategroupsfromaccountrequest.h"

namespace QtAws {
namespace Chime {

class DisassociateSigninDelegateGroupsFromAccountRequest;

class DisassociateSigninDelegateGroupsFromAccountRequestPrivate : public ChimeRequestPrivate {

public:
    DisassociateSigninDelegateGroupsFromAccountRequestPrivate(const ChimeRequest::Action action,
                                   DisassociateSigninDelegateGroupsFromAccountRequest * const q);
    DisassociateSigninDelegateGroupsFromAccountRequestPrivate(const DisassociateSigninDelegateGroupsFromAccountRequestPrivate &other,
                                   DisassociateSigninDelegateGroupsFromAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateSigninDelegateGroupsFromAccountRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
