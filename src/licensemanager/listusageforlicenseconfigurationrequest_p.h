// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSAGEFORLICENSECONFIGURATIONREQUEST_P_H
#define QTAWS_LISTUSAGEFORLICENSECONFIGURATIONREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listusageforlicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListUsageForLicenseConfigurationRequest;

class ListUsageForLicenseConfigurationRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListUsageForLicenseConfigurationRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListUsageForLicenseConfigurationRequest * const q);
    ListUsageForLicenseConfigurationRequestPrivate(const ListUsageForLicenseConfigurationRequestPrivate &other,
                                   ListUsageForLicenseConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUsageForLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
