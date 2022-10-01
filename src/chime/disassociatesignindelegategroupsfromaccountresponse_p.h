// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESIGNINDELEGATEGROUPSFROMACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATESIGNINDELEGATEGROUPSFROMACCOUNTRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DisassociateSigninDelegateGroupsFromAccountResponse;

class DisassociateSigninDelegateGroupsFromAccountResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DisassociateSigninDelegateGroupsFromAccountResponsePrivate(DisassociateSigninDelegateGroupsFromAccountResponse * const q);

    void parseDisassociateSigninDelegateGroupsFromAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateSigninDelegateGroupsFromAccountResponse)
    Q_DISABLE_COPY(DisassociateSigninDelegateGroupsFromAccountResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
