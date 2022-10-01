// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOOIDCREQUEST_P_H
#define QTAWS_SSOOIDCREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ssooidcrequest.h"

namespace QtAws {
namespace SsoOidc {

class SsoOidcRequest;

class SsoOidcRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SsoOidcRequest::Action action; ///< SsoOidc action to be performed.
    QString apiVersion;        ///< SsoOidc API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SsoOidc request (query string) parameters. @todo?

    SsoOidcRequestPrivate(const SsoOidcRequest::Action action, SsoOidcRequest * const q);
    SsoOidcRequestPrivate(const SsoOidcRequestPrivate &other, SsoOidcRequest * const q);

    static QString toString(const SsoOidcRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SsoOidcRequest)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
