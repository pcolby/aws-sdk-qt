// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSECONFIGURATIONREQUEST_P_H
#define QTAWS_DELETELICENSECONFIGURATIONREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "deletelicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseConfigurationRequest;

class DeleteLicenseConfigurationRequestPrivate : public LicenseManagerRequestPrivate {

public:
    DeleteLicenseConfigurationRequestPrivate(const LicenseManagerRequest::Action action,
                                   DeleteLicenseConfigurationRequest * const q);
    DeleteLicenseConfigurationRequestPrivate(const DeleteLicenseConfigurationRequestPrivate &other,
                                   DeleteLicenseConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
