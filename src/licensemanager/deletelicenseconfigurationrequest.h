// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSECONFIGURATIONREQUEST_H
#define QTAWS_DELETELICENSECONFIGURATIONREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseConfigurationRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT DeleteLicenseConfigurationRequest : public LicenseManagerRequest {

public:
    DeleteLicenseConfigurationRequest(const DeleteLicenseConfigurationRequest &other);
    DeleteLicenseConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
