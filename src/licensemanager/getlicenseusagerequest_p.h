// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSEUSAGEREQUEST_P_H
#define QTAWS_GETLICENSEUSAGEREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "getlicenseusagerequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseUsageRequest;

class GetLicenseUsageRequestPrivate : public LicenseManagerRequestPrivate {

public:
    GetLicenseUsageRequestPrivate(const LicenseManagerRequest::Action action,
                                   GetLicenseUsageRequest * const q);
    GetLicenseUsageRequestPrivate(const GetLicenseUsageRequestPrivate &other,
                                   GetLicenseUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLicenseUsageRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
