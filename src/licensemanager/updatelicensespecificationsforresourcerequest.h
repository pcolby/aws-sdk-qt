// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELICENSESPECIFICATIONSFORRESOURCEREQUEST_H
#define QTAWS_UPDATELICENSESPECIFICATIONSFORRESOURCEREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class UpdateLicenseSpecificationsForResourceRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT UpdateLicenseSpecificationsForResourceRequest : public LicenseManagerRequest {

public:
    UpdateLicenseSpecificationsForResourceRequest(const UpdateLicenseSpecificationsForResourceRequest &other);
    UpdateLicenseSpecificationsForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLicenseSpecificationsForResourceRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
