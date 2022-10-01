// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESIGNINDELEGATEGROUPSWITHACCOUNTREQUEST_P_H
#define QTAWS_ASSOCIATESIGNINDELEGATEGROUPSWITHACCOUNTREQUEST_P_H

#include "chimerequest_p.h"
#include "associatesignindelegategroupswithaccountrequest.h"

namespace QtAws {
namespace Chime {

class AssociateSigninDelegateGroupsWithAccountRequest;

class AssociateSigninDelegateGroupsWithAccountRequestPrivate : public ChimeRequestPrivate {

public:
    AssociateSigninDelegateGroupsWithAccountRequestPrivate(const ChimeRequest::Action action,
                                   AssociateSigninDelegateGroupsWithAccountRequest * const q);
    AssociateSigninDelegateGroupsWithAccountRequestPrivate(const AssociateSigninDelegateGroupsWithAccountRequestPrivate &other,
                                   AssociateSigninDelegateGroupsWithAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateSigninDelegateGroupsWithAccountRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
