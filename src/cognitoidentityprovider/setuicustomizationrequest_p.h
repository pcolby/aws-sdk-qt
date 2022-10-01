// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUICUSTOMIZATIONREQUEST_P_H
#define QTAWS_SETUICUSTOMIZATIONREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "setuicustomizationrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUICustomizationRequest;

class SetUICustomizationRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    SetUICustomizationRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   SetUICustomizationRequest * const q);
    SetUICustomizationRequestPrivate(const SetUICustomizationRequestPrivate &other,
                                   SetUICustomizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetUICustomizationRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
