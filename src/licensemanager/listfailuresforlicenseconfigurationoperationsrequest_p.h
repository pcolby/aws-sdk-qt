// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFAILURESFORLICENSECONFIGURATIONOPERATIONSREQUEST_P_H
#define QTAWS_LISTFAILURESFORLICENSECONFIGURATIONOPERATIONSREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listfailuresforlicenseconfigurationoperationsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListFailuresForLicenseConfigurationOperationsRequest;

class ListFailuresForLicenseConfigurationOperationsRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListFailuresForLicenseConfigurationOperationsRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListFailuresForLicenseConfigurationOperationsRequest * const q);
    ListFailuresForLicenseConfigurationOperationsRequestPrivate(const ListFailuresForLicenseConfigurationOperationsRequestPrivate &other,
                                   ListFailuresForLicenseConfigurationOperationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFailuresForLicenseConfigurationOperationsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
