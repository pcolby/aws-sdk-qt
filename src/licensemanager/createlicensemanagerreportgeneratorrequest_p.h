// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSEMANAGERREPORTGENERATORREQUEST_P_H
#define QTAWS_CREATELICENSEMANAGERREPORTGENERATORREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "createlicensemanagerreportgeneratorrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseManagerReportGeneratorRequest;

class CreateLicenseManagerReportGeneratorRequestPrivate : public LicenseManagerRequestPrivate {

public:
    CreateLicenseManagerReportGeneratorRequestPrivate(const LicenseManagerRequest::Action action,
                                   CreateLicenseManagerReportGeneratorRequest * const q);
    CreateLicenseManagerReportGeneratorRequestPrivate(const CreateLicenseManagerReportGeneratorRequestPrivate &other,
                                   CreateLicenseManagerReportGeneratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLicenseManagerReportGeneratorRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
