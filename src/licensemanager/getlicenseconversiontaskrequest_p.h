// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSECONVERSIONTASKREQUEST_P_H
#define QTAWS_GETLICENSECONVERSIONTASKREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "getlicenseconversiontaskrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseConversionTaskRequest;

class GetLicenseConversionTaskRequestPrivate : public LicenseManagerRequestPrivate {

public:
    GetLicenseConversionTaskRequestPrivate(const LicenseManagerRequest::Action action,
                                   GetLicenseConversionTaskRequest * const q);
    GetLicenseConversionTaskRequestPrivate(const GetLicenseConversionTaskRequestPrivate &other,
                                   GetLicenseConversionTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLicenseConversionTaskRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
