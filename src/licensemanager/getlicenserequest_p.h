// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSEREQUEST_P_H
#define QTAWS_GETLICENSEREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "getlicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseRequest;

class GetLicenseRequestPrivate : public LicenseManagerRequestPrivate {

public:
    GetLicenseRequestPrivate(const LicenseManagerRequest::Action action,
                                   GetLicenseRequest * const q);
    GetLicenseRequestPrivate(const GetLicenseRequestPrivate &other,
                                   GetLicenseRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
