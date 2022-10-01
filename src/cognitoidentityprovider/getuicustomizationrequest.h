// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUICUSTOMIZATIONREQUEST_H
#define QTAWS_GETUICUSTOMIZATIONREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUICustomizationRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetUICustomizationRequest : public CognitoIdentityProviderRequest {

public:
    GetUICustomizationRequest(const GetUICustomizationRequest &other);
    GetUICustomizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUICustomizationRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
