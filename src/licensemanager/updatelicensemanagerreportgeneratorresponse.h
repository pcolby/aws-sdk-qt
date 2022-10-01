// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELICENSEMANAGERREPORTGENERATORRESPONSE_H
#define QTAWS_UPDATELICENSEMANAGERREPORTGENERATORRESPONSE_H

#include "licensemanagerresponse.h"
#include "updatelicensemanagerreportgeneratorrequest.h"

namespace QtAws {
namespace LicenseManager {

class UpdateLicenseManagerReportGeneratorResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT UpdateLicenseManagerReportGeneratorResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    UpdateLicenseManagerReportGeneratorResponse(const UpdateLicenseManagerReportGeneratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLicenseManagerReportGeneratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLicenseManagerReportGeneratorResponse)
    Q_DISABLE_COPY(UpdateLicenseManagerReportGeneratorResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
