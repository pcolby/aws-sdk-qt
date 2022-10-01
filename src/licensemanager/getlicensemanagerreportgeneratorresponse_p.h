// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSEMANAGERREPORTGENERATORRESPONSE_P_H
#define QTAWS_GETLICENSEMANAGERREPORTGENERATORRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseManagerReportGeneratorResponse;

class GetLicenseManagerReportGeneratorResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit GetLicenseManagerReportGeneratorResponsePrivate(GetLicenseManagerReportGeneratorResponse * const q);

    void parseGetLicenseManagerReportGeneratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLicenseManagerReportGeneratorResponse)
    Q_DISABLE_COPY(GetLicenseManagerReportGeneratorResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
