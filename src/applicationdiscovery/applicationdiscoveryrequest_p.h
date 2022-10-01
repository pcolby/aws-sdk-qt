// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONDISCOVERYREQUEST_P_H
#define QTAWS_APPLICATIONDISCOVERYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ApplicationDiscoveryRequest;

class ApplicationDiscoveryRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ApplicationDiscoveryRequest::Action action; ///< ApplicationDiscovery action to be performed.
    QString apiVersion;        ///< ApplicationDiscovery API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ApplicationDiscovery request (query string) parameters. @todo?

    ApplicationDiscoveryRequestPrivate(const ApplicationDiscoveryRequest::Action action, ApplicationDiscoveryRequest * const q);
    ApplicationDiscoveryRequestPrivate(const ApplicationDiscoveryRequestPrivate &other, ApplicationDiscoveryRequest * const q);

    static QString toString(const ApplicationDiscoveryRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ApplicationDiscoveryRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
