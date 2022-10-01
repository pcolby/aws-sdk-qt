// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSEMANAGERREPORTGENERATORRESPONSE_H
#define QTAWS_GETLICENSEMANAGERREPORTGENERATORRESPONSE_H

#include "licensemanagerresponse.h"
#include "getlicensemanagerreportgeneratorrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseManagerReportGeneratorResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT GetLicenseManagerReportGeneratorResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    GetLicenseManagerReportGeneratorResponse(const GetLicenseManagerReportGeneratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLicenseManagerReportGeneratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLicenseManagerReportGeneratorResponse)
    Q_DISABLE_COPY(GetLicenseManagerReportGeneratorResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
