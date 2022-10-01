// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSAGEFORLICENSECONFIGURATIONREQUEST_H
#define QTAWS_LISTUSAGEFORLICENSECONFIGURATIONREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListUsageForLicenseConfigurationRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ListUsageForLicenseConfigurationRequest : public LicenseManagerRequest {

public:
    ListUsageForLicenseConfigurationRequest(const ListUsageForLicenseConfigurationRequest &other);
    ListUsageForLicenseConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsageForLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
