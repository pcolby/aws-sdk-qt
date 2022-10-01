// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESIGNINDELEGATEGROUPSWITHACCOUNTRESPONSE_H
#define QTAWS_ASSOCIATESIGNINDELEGATEGROUPSWITHACCOUNTRESPONSE_H

#include "chimeresponse.h"
#include "associatesignindelegategroupswithaccountrequest.h"

namespace QtAws {
namespace Chime {

class AssociateSigninDelegateGroupsWithAccountResponsePrivate;

class QTAWSCHIME_EXPORT AssociateSigninDelegateGroupsWithAccountResponse : public ChimeResponse {
    Q_OBJECT

public:
    AssociateSigninDelegateGroupsWithAccountResponse(const AssociateSigninDelegateGroupsWithAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateSigninDelegateGroupsWithAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSigninDelegateGroupsWithAccountResponse)
    Q_DISABLE_COPY(AssociateSigninDelegateGroupsWithAccountResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
