// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESIGNINDELEGATEGROUPSFROMACCOUNTRESPONSE_H
#define QTAWS_DISASSOCIATESIGNINDELEGATEGROUPSFROMACCOUNTRESPONSE_H

#include "chimeresponse.h"
#include "disassociatesignindelegategroupsfromaccountrequest.h"

namespace QtAws {
namespace Chime {

class DisassociateSigninDelegateGroupsFromAccountResponsePrivate;

class QTAWSCHIME_EXPORT DisassociateSigninDelegateGroupsFromAccountResponse : public ChimeResponse {
    Q_OBJECT

public:
    DisassociateSigninDelegateGroupsFromAccountResponse(const DisassociateSigninDelegateGroupsFromAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateSigninDelegateGroupsFromAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateSigninDelegateGroupsFromAccountResponse)
    Q_DISABLE_COPY(DisassociateSigninDelegateGroupsFromAccountResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
