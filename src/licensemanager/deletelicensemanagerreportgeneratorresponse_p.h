// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSEMANAGERREPORTGENERATORRESPONSE_P_H
#define QTAWS_DELETELICENSEMANAGERREPORTGENERATORRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseManagerReportGeneratorResponse;

class DeleteLicenseManagerReportGeneratorResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit DeleteLicenseManagerReportGeneratorResponsePrivate(DeleteLicenseManagerReportGeneratorResponse * const q);

    void parseDeleteLicenseManagerReportGeneratorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLicenseManagerReportGeneratorResponse)
    Q_DISABLE_COPY(DeleteLicenseManagerReportGeneratorResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
