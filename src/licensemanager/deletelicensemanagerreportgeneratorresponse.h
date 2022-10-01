// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSEMANAGERREPORTGENERATORRESPONSE_H
#define QTAWS_DELETELICENSEMANAGERREPORTGENERATORRESPONSE_H

#include "licensemanagerresponse.h"
#include "deletelicensemanagerreportgeneratorrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseManagerReportGeneratorResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT DeleteLicenseManagerReportGeneratorResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    DeleteLicenseManagerReportGeneratorResponse(const DeleteLicenseManagerReportGeneratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLicenseManagerReportGeneratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLicenseManagerReportGeneratorResponse)
    Q_DISABLE_COPY(DeleteLicenseManagerReportGeneratorResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
