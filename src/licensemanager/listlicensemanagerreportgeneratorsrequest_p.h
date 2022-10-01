// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSEMANAGERREPORTGENERATORSREQUEST_P_H
#define QTAWS_LISTLICENSEMANAGERREPORTGENERATORSREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listlicensemanagerreportgeneratorsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseManagerReportGeneratorsRequest;

class ListLicenseManagerReportGeneratorsRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListLicenseManagerReportGeneratorsRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListLicenseManagerReportGeneratorsRequest * const q);
    ListLicenseManagerReportGeneratorsRequestPrivate(const ListLicenseManagerReportGeneratorsRequestPrivate &other,
                                   ListLicenseManagerReportGeneratorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLicenseManagerReportGeneratorsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
