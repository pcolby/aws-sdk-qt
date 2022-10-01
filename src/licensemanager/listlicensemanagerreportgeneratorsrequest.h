// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSEMANAGERREPORTGENERATORSREQUEST_H
#define QTAWS_LISTLICENSEMANAGERREPORTGENERATORSREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseManagerReportGeneratorsRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ListLicenseManagerReportGeneratorsRequest : public LicenseManagerRequest {

public:
    ListLicenseManagerReportGeneratorsRequest(const ListLicenseManagerReportGeneratorsRequest &other);
    ListLicenseManagerReportGeneratorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLicenseManagerReportGeneratorsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
