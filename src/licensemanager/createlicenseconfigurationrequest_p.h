// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSECONFIGURATIONREQUEST_P_H
#define QTAWS_CREATELICENSECONFIGURATIONREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "createlicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseConfigurationRequest;

class CreateLicenseConfigurationRequestPrivate : public LicenseManagerRequestPrivate {

public:
    CreateLicenseConfigurationRequestPrivate(const LicenseManagerRequest::Action action,
                                   CreateLicenseConfigurationRequest * const q);
    CreateLicenseConfigurationRequestPrivate(const CreateLicenseConfigurationRequestPrivate &other,
                                   CreateLicenseConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
