// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDCONFIRMATIONCODEREQUEST_P_H
#define QTAWS_RESENDCONFIRMATIONCODEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "resendconfirmationcoderequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ResendConfirmationCodeRequest;

class ResendConfirmationCodeRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ResendConfirmationCodeRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ResendConfirmationCodeRequest * const q);
    ResendConfirmationCodeRequestPrivate(const ResendConfirmationCodeRequestPrivate &other,
                                   ResendConfirmationCodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResendConfirmationCodeRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
