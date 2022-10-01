// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSECONFIGURATIONSREQUEST_H
#define QTAWS_LISTLICENSECONFIGURATIONSREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseConfigurationsRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ListLicenseConfigurationsRequest : public LicenseManagerRequest {

public:
    ListLicenseConfigurationsRequest(const ListLicenseConfigurationsRequest &other);
    ListLicenseConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLicenseConfigurationsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
