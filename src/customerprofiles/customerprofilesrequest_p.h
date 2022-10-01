// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CUSTOMERPROFILESREQUEST_P_H
#define QTAWS_CUSTOMERPROFILESREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class CustomerProfilesRequest;

class CustomerProfilesRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CustomerProfilesRequest::Action action; ///< CustomerProfiles action to be performed.
    QString apiVersion;        ///< CustomerProfiles API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CustomerProfiles request (query string) parameters. @todo?

    CustomerProfilesRequestPrivate(const CustomerProfilesRequest::Action action, CustomerProfilesRequest * const q);
    CustomerProfilesRequestPrivate(const CustomerProfilesRequestPrivate &other, CustomerProfilesRequest * const q);

    static QString toString(const CustomerProfilesRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CustomerProfilesRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
