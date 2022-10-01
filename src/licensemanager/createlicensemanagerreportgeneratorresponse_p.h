// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSEMANAGERREPORTGENERATORRESPONSE_P_H
#define QTAWS_CREATELICENSEMANAGERREPORTGENERATORRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseManagerReportGeneratorResponse;

class CreateLicenseManagerReportGeneratorResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit CreateLicenseManagerReportGeneratorResponsePrivate(CreateLicenseManagerReportGeneratorResponse * const q);

    void parseCreateLicenseManagerReportGeneratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLicenseManagerReportGeneratorResponse)
    Q_DISABLE_COPY(CreateLicenseManagerReportGeneratorResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
