// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSEMANAGERREPORTGENERATORREQUEST_H
#define QTAWS_GETLICENSEMANAGERREPORTGENERATORREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseManagerReportGeneratorRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT GetLicenseManagerReportGeneratorRequest : public LicenseManagerRequest {

public:
    GetLicenseManagerReportGeneratorRequest(const GetLicenseManagerReportGeneratorRequest &other);
    GetLicenseManagerReportGeneratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLicenseManagerReportGeneratorRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
