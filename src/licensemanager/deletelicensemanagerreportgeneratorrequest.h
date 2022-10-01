// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSEMANAGERREPORTGENERATORREQUEST_H
#define QTAWS_DELETELICENSEMANAGERREPORTGENERATORREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseManagerReportGeneratorRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT DeleteLicenseManagerReportGeneratorRequest : public LicenseManagerRequest {

public:
    DeleteLicenseManagerReportGeneratorRequest(const DeleteLicenseManagerReportGeneratorRequest &other);
    DeleteLicenseManagerReportGeneratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLicenseManagerReportGeneratorRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
