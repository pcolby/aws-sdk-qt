// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LICENSEMANAGERREQUEST_P_H
#define QTAWS_LICENSEMANAGERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class LicenseManagerRequest;

class LicenseManagerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LicenseManagerRequest::Action action; ///< LicenseManager action to be performed.
    QString apiVersion;        ///< LicenseManager API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LicenseManager request (query string) parameters. @todo?

    LicenseManagerRequestPrivate(const LicenseManagerRequest::Action action, LicenseManagerRequest * const q);
    LicenseManagerRequestPrivate(const LicenseManagerRequestPrivate &other, LicenseManagerRequest * const q);

    static QString toString(const LicenseManagerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LicenseManagerRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
