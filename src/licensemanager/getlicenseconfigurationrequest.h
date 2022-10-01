// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSECONFIGURATIONREQUEST_H
#define QTAWS_GETLICENSECONFIGURATIONREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseConfigurationRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT GetLicenseConfigurationRequest : public LicenseManagerRequest {

public:
    GetLicenseConfigurationRequest(const GetLicenseConfigurationRequest &other);
    GetLicenseConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
