// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSEREQUEST_H
#define QTAWS_GETLICENSEREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT GetLicenseRequest : public LicenseManagerRequest {

public:
    GetLicenseRequest(const GetLicenseRequest &other);
    GetLicenseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
