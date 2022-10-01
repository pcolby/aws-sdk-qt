// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOIDENTITYREQUEST_P_H
#define QTAWS_COGNITOIDENTITYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class CognitoIdentityRequest;

class CognitoIdentityRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CognitoIdentityRequest::Action action; ///< CognitoIdentity action to be performed.
    QString apiVersion;        ///< CognitoIdentity API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CognitoIdentity request (query string) parameters. @todo?

    CognitoIdentityRequestPrivate(const CognitoIdentityRequest::Action action, CognitoIdentityRequest * const q);
    CognitoIdentityRequestPrivate(const CognitoIdentityRequestPrivate &other, CognitoIdentityRequest * const q);

    static QString toString(const CognitoIdentityRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CognitoIdentityRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
