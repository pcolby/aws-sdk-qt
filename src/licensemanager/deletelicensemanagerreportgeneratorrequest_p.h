// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSEMANAGERREPORTGENERATORREQUEST_P_H
#define QTAWS_DELETELICENSEMANAGERREPORTGENERATORREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "deletelicensemanagerreportgeneratorrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseManagerReportGeneratorRequest;

class DeleteLicenseManagerReportGeneratorRequestPrivate : public LicenseManagerRequestPrivate {

public:
    DeleteLicenseManagerReportGeneratorRequestPrivate(const LicenseManagerRequest::Action action,
                                   DeleteLicenseManagerReportGeneratorRequest * const q);
    DeleteLicenseManagerReportGeneratorRequestPrivate(const DeleteLicenseManagerReportGeneratorRequestPrivate &other,
                                   DeleteLicenseManagerReportGeneratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLicenseManagerReportGeneratorRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
