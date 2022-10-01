// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUICUSTOMIZATIONREQUEST_P_H
#define QTAWS_GETUICUSTOMIZATIONREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "getuicustomizationrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUICustomizationRequest;

class GetUICustomizationRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    GetUICustomizationRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   GetUICustomizationRequest * const q);
    GetUICustomizationRequestPrivate(const GetUICustomizationRequestPrivate &other,
                                   GetUICustomizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUICustomizationRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
