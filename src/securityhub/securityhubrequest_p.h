// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SECURITYHUBREQUEST_P_H
#define QTAWS_SECURITYHUBREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class SecurityHubRequest;

class SecurityHubRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SecurityHubRequest::Action action; ///< SecurityHub action to be performed.
    QString apiVersion;        ///< SecurityHub API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SecurityHub request (query string) parameters. @todo?

    SecurityHubRequestPrivate(const SecurityHubRequest::Action action, SecurityHubRequest * const q);
    SecurityHubRequestPrivate(const SecurityHubRequestPrivate &other, SecurityHubRequest * const q);

    static QString toString(const SecurityHubRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SecurityHubRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
