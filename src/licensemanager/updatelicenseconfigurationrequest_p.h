// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELICENSECONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATELICENSECONFIGURATIONREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "updatelicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class UpdateLicenseConfigurationRequest;

class UpdateLicenseConfigurationRequestPrivate : public LicenseManagerRequestPrivate {

public:
    UpdateLicenseConfigurationRequestPrivate(const LicenseManagerRequest::Action action,
                                   UpdateLicenseConfigurationRequest * const q);
    UpdateLicenseConfigurationRequestPrivate(const UpdateLicenseConfigurationRequestPrivate &other,
                                   UpdateLicenseConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
