// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSEMANAGERREPORTGENERATORSRESPONSE_P_H
#define QTAWS_LISTLICENSEMANAGERREPORTGENERATORSRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseManagerReportGeneratorsResponse;

class ListLicenseManagerReportGeneratorsResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListLicenseManagerReportGeneratorsResponsePrivate(ListLicenseManagerReportGeneratorsResponse * const q);

    void parseListLicenseManagerReportGeneratorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLicenseManagerReportGeneratorsResponse)
    Q_DISABLE_COPY(ListLicenseManagerReportGeneratorsResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
