// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELICENSECONFIGURATIONREQUEST_H
#define QTAWS_UPDATELICENSECONFIGURATIONREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class UpdateLicenseConfigurationRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT UpdateLicenseConfigurationRequest : public LicenseManagerRequest {

public:
    UpdateLicenseConfigurationRequest(const UpdateLicenseConfigurationRequest &other);
    UpdateLicenseConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
