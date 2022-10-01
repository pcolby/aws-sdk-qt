// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESIGNINDELEGATEGROUPSWITHACCOUNTRESPONSE_P_H
#define QTAWS_ASSOCIATESIGNINDELEGATEGROUPSWITHACCOUNTRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class AssociateSigninDelegateGroupsWithAccountResponse;

class AssociateSigninDelegateGroupsWithAccountResponsePrivate : public ChimeResponsePrivate {

public:

    explicit AssociateSigninDelegateGroupsWithAccountResponsePrivate(AssociateSigninDelegateGroupsWithAccountResponse * const q);

    void parseAssociateSigninDelegateGroupsWithAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateSigninDelegateGroupsWithAccountResponse)
    Q_DISABLE_COPY(AssociateSigninDelegateGroupsWithAccountResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
