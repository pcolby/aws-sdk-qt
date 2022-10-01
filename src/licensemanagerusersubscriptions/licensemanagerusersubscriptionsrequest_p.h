// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSREQUEST_P_H
#define QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "licensemanagerusersubscriptionsrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class LicenseManagerUserSubscriptionsRequest;

class LicenseManagerUserSubscriptionsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LicenseManagerUserSubscriptionsRequest::Action action; ///< LicenseManagerUserSubscriptions action to be performed.
    QString apiVersion;        ///< LicenseManagerUserSubscriptions API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LicenseManagerUserSubscriptions request (query string) parameters. @todo?

    LicenseManagerUserSubscriptionsRequestPrivate(const LicenseManagerUserSubscriptionsRequest::Action action, LicenseManagerUserSubscriptionsRequest * const q);
    LicenseManagerUserSubscriptionsRequestPrivate(const LicenseManagerUserSubscriptionsRequestPrivate &other, LicenseManagerUserSubscriptionsRequest * const q);

    static QString toString(const LicenseManagerUserSubscriptionsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LicenseManagerUserSubscriptionsRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
