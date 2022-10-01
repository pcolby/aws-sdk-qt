// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDCONFIRMATIONCODEREQUEST_H
#define QTAWS_RESENDCONFIRMATIONCODEREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ResendConfirmationCodeRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ResendConfirmationCodeRequest : public CognitoIdentityProviderRequest {

public:
    ResendConfirmationCodeRequest(const ResendConfirmationCodeRequest &other);
    ResendConfirmationCodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResendConfirmationCodeRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
