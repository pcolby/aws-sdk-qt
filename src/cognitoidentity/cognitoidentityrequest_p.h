/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_COGNITOIDENTITYREQUEST_P_H
#define QTAWS_COGNITOIDENTITYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class CognitoIdentityRequest;

class QTAWS_EXPORT CognitoIdentityRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
