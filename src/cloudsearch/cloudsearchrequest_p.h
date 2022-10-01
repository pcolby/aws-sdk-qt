// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDSEARCHREQUEST_P_H
#define QTAWS_CLOUDSEARCHREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class CloudSearchRequest;

class CloudSearchRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudSearchRequest::Action action; ///< CloudSearch action to be performed.
    QString apiVersion;        ///< CloudSearch API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudSearch request (query string) parameters. @todo?

    CloudSearchRequestPrivate(const CloudSearchRequest::Action action, CloudSearchRequest * const q);
    CloudSearchRequestPrivate(const CloudSearchRequestPrivate &other, CloudSearchRequest * const q);

    static QString toString(const CloudSearchRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudSearchRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
