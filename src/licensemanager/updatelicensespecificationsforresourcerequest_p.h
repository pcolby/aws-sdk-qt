// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELICENSESPECIFICATIONSFORRESOURCEREQUEST_P_H
#define QTAWS_UPDATELICENSESPECIFICATIONSFORRESOURCEREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "updatelicensespecificationsforresourcerequest.h"

namespace QtAws {
namespace LicenseManager {

class UpdateLicenseSpecificationsForResourceRequest;

class UpdateLicenseSpecificationsForResourceRequestPrivate : public LicenseManagerRequestPrivate {

public:
    UpdateLicenseSpecificationsForResourceRequestPrivate(const LicenseManagerRequest::Action action,
                                   UpdateLicenseSpecificationsForResourceRequest * const q);
    UpdateLicenseSpecificationsForResourceRequestPrivate(const UpdateLicenseSpecificationsForResourceRequestPrivate &other,
                                   UpdateLicenseSpecificationsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLicenseSpecificationsForResourceRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
