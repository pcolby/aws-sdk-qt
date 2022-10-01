// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSEMANAGERREPORTGENERATORREQUEST_P_H
#define QTAWS_GETLICENSEMANAGERREPORTGENERATORREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "getlicensemanagerreportgeneratorrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseManagerReportGeneratorRequest;

class GetLicenseManagerReportGeneratorRequestPrivate : public LicenseManagerRequestPrivate {

public:
    GetLicenseManagerReportGeneratorRequestPrivate(const LicenseManagerRequest::Action action,
                                   GetLicenseManagerReportGeneratorRequest * const q);
    GetLicenseManagerReportGeneratorRequestPrivate(const GetLicenseManagerReportGeneratorRequestPrivate &other,
                                   GetLicenseManagerReportGeneratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLicenseManagerReportGeneratorRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
