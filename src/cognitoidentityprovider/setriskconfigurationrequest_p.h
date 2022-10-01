// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRISKCONFIGURATIONREQUEST_P_H
#define QTAWS_SETRISKCONFIGURATIONREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "setriskconfigurationrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetRiskConfigurationRequest;

class SetRiskConfigurationRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    SetRiskConfigurationRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   SetRiskConfigurationRequest * const q);
    SetRiskConfigurationRequestPrivate(const SetRiskConfigurationRequestPrivate &other,
                                   SetRiskConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetRiskConfigurationRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
