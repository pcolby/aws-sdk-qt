// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSEMANAGERREPORTGENERATORSRESPONSE_H
#define QTAWS_LISTLICENSEMANAGERREPORTGENERATORSRESPONSE_H

#include "licensemanagerresponse.h"
#include "listlicensemanagerreportgeneratorsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseManagerReportGeneratorsResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListLicenseManagerReportGeneratorsResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListLicenseManagerReportGeneratorsResponse(const ListLicenseManagerReportGeneratorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLicenseManagerReportGeneratorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLicenseManagerReportGeneratorsResponse)
    Q_DISABLE_COPY(ListLicenseManagerReportGeneratorsResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
