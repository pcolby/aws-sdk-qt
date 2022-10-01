// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOIDENTITYPROVIDERREQUEST_P_H
#define QTAWS_COGNITOIDENTITYPROVIDERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CognitoIdentityProviderRequest;

class CognitoIdentityProviderRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CognitoIdentityProviderRequest::Action action; ///< CognitoIdentityProvider action to be performed.
    QString apiVersion;        ///< CognitoIdentityProvider API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CognitoIdentityProvider request (query string) parameters. @todo?

    CognitoIdentityProviderRequestPrivate(const CognitoIdentityProviderRequest::Action action, CognitoIdentityProviderRequest * const q);
    CognitoIdentityProviderRequestPrivate(const CognitoIdentityProviderRequestPrivate &other, CognitoIdentityProviderRequest * const q);

    static QString toString(const CognitoIdentityProviderRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CognitoIdentityProviderRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
