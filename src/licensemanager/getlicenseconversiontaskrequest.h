// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSECONVERSIONTASKREQUEST_H
#define QTAWS_GETLICENSECONVERSIONTASKREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseConversionTaskRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT GetLicenseConversionTaskRequest : public LicenseManagerRequest {

public:
    GetLicenseConversionTaskRequest(const GetLicenseConversionTaskRequest &other);
    GetLicenseConversionTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLicenseConversionTaskRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
