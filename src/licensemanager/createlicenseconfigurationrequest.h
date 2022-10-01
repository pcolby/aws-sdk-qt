// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSECONFIGURATIONREQUEST_H
#define QTAWS_CREATELICENSECONFIGURATIONREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseConfigurationRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateLicenseConfigurationRequest : public LicenseManagerRequest {

public:
    CreateLicenseConfigurationRequest(const CreateLicenseConfigurationRequest &other);
    CreateLicenseConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
