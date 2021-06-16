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

#ifndef QTAWS_SSOOIDCREQUEST_P_H
#define QTAWS_SSOOIDCREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ssooidcrequest.h"

namespace QtAws {
namespace SSOOIDC {

class SsooidcRequest;

class QTAWS_EXPORT SsooidcRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SsooidcRequest::Action action; ///< SSOOIDC action to be performed.
    QString apiVersion;        ///< SSOOIDC API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SSOOIDC request (query string) parameters. @todo?

    SsooidcRequestPrivate(const SsooidcRequest::Action action, SsooidcRequest * const q);
    SsooidcRequestPrivate(const SsooidcRequestPrivate &other, SsooidcRequest * const q);

    static QString toString(const SsooidcRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SsooidcRequest)

};

} // namespace SSOOIDC
} // namespace QtAws

#endif
