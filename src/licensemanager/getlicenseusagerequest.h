// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSEUSAGEREQUEST_H
#define QTAWS_GETLICENSEUSAGEREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseUsageRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT GetLicenseUsageRequest : public LicenseManagerRequest {

public:
    GetLicenseUsageRequest(const GetLicenseUsageRequest &other);
    GetLicenseUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLicenseUsageRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
