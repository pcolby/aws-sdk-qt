// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESIGNINDELEGATEGROUPSFROMACCOUNTREQUEST_H
#define QTAWS_DISASSOCIATESIGNINDELEGATEGROUPSFROMACCOUNTREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DisassociateSigninDelegateGroupsFromAccountRequestPrivate;

class QTAWSCHIME_EXPORT DisassociateSigninDelegateGroupsFromAccountRequest : public ChimeRequest {

public:
    DisassociateSigninDelegateGroupsFromAccountRequest(const DisassociateSigninDelegateGroupsFromAccountRequest &other);
    DisassociateSigninDelegateGroupsFromAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateSigninDelegateGroupsFromAccountRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
