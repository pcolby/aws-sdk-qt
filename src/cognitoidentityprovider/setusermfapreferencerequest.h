// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERMFAPREFERENCEREQUEST_H
#define QTAWS_SETUSERMFAPREFERENCEREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserMFAPreferenceRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT SetUserMFAPreferenceRequest : public CognitoIdentityProviderRequest {

public:
    SetUserMFAPreferenceRequest(const SetUserMFAPreferenceRequest &other);
    SetUserMFAPreferenceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetUserMFAPreferenceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
