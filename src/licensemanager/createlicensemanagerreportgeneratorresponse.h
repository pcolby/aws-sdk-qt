// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSEMANAGERREPORTGENERATORRESPONSE_H
#define QTAWS_CREATELICENSEMANAGERREPORTGENERATORRESPONSE_H

#include "licensemanagerresponse.h"
#include "createlicensemanagerreportgeneratorrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseManagerReportGeneratorResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateLicenseManagerReportGeneratorResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    CreateLicenseManagerReportGeneratorResponse(const CreateLicenseManagerReportGeneratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLicenseManagerReportGeneratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLicenseManagerReportGeneratorResponse)
    Q_DISABLE_COPY(CreateLicenseManagerReportGeneratorResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
