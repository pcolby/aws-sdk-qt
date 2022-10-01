// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSECONFIGURATIONREQUEST_P_H
#define QTAWS_GETLICENSECONFIGURATIONREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "getlicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseConfigurationRequest;

class GetLicenseConfigurationRequestPrivate : public LicenseManagerRequestPrivate {

public:
    GetLicenseConfigurationRequestPrivate(const LicenseManagerRequest::Action action,
                                   GetLicenseConfigurationRequest * const q);
    GetLicenseConfigurationRequestPrivate(const GetLicenseConfigurationRequestPrivate &other,
                                   GetLicenseConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
