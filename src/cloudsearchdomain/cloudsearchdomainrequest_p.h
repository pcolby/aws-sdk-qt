// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDSEARCHDOMAINREQUEST_P_H
#define QTAWS_CLOUDSEARCHDOMAINREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudsearchdomainrequest.h"

namespace QtAws {
namespace CloudSearchDomain {

class CloudSearchDomainRequest;

class CloudSearchDomainRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudSearchDomainRequest::Action action; ///< CloudSearchDomain action to be performed.
    QString apiVersion;        ///< CloudSearchDomain API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudSearchDomain request (query string) parameters. @todo?

    CloudSearchDomainRequestPrivate(const CloudSearchDomainRequest::Action action, CloudSearchDomainRequest * const q);
    CloudSearchDomainRequestPrivate(const CloudSearchDomainRequestPrivate &other, CloudSearchDomainRequest * const q);

    static QString toString(const CloudSearchDomainRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudSearchDomainRequest)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
