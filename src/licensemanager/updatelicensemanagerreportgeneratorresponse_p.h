// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELICENSEMANAGERREPORTGENERATORRESPONSE_P_H
#define QTAWS_UPDATELICENSEMANAGERREPORTGENERATORRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class UpdateLicenseManagerReportGeneratorResponse;

class UpdateLicenseManagerReportGeneratorResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit UpdateLicenseManagerReportGeneratorResponsePrivate(UpdateLicenseManagerReportGeneratorResponse * const q);

    void parseUpdateLicenseManagerReportGeneratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLicenseManagerReportGeneratorResponse)
    Q_DISABLE_COPY(UpdateLicenseManagerReportGeneratorResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
