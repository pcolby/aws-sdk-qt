// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSEMANAGERREPORTGENERATORREQUEST_H
#define QTAWS_CREATELICENSEMANAGERREPORTGENERATORREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseManagerReportGeneratorRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateLicenseManagerReportGeneratorRequest : public LicenseManagerRequest {

public:
    CreateLicenseManagerReportGeneratorRequest(const CreateLicenseManagerReportGeneratorRequest &other);
    CreateLicenseManagerReportGeneratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLicenseManagerReportGeneratorRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
