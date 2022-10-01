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

#ifndef QTAWS_CHIMESDKIDENTITYREQUEST_P_H
#define QTAWS_CHIMESDKIDENTITYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ChimeSdkIdentityRequest;

class ChimeSdkIdentityRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ChimeSdkIdentityRequest::Action action; ///< ChimeSdkIdentity action to be performed.
    QString apiVersion;        ///< ChimeSdkIdentity API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ChimeSdkIdentity request (query string) parameters. @todo?

    ChimeSdkIdentityRequestPrivate(const ChimeSdkIdentityRequest::Action action, ChimeSdkIdentityRequest * const q);
    ChimeSdkIdentityRequestPrivate(const ChimeSdkIdentityRequestPrivate &other, ChimeSdkIdentityRequest * const q);

    static QString toString(const ChimeSdkIdentityRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ChimeSdkIdentityRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
