// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELICENSEMANAGERREPORTGENERATORREQUEST_P_H
#define QTAWS_UPDATELICENSEMANAGERREPORTGENERATORREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "updatelicensemanagerreportgeneratorrequest.h"

namespace QtAws {
namespace LicenseManager {

class UpdateLicenseManagerReportGeneratorRequest;

class UpdateLicenseManagerReportGeneratorRequestPrivate : public LicenseManagerRequestPrivate {

public:
    UpdateLicenseManagerReportGeneratorRequestPrivate(const LicenseManagerRequest::Action action,
                                   UpdateLicenseManagerReportGeneratorRequest * const q);
    UpdateLicenseManagerReportGeneratorRequestPrivate(const UpdateLicenseManagerReportGeneratorRequestPrivate &other,
                                   UpdateLicenseManagerReportGeneratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLicenseManagerReportGeneratorRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
