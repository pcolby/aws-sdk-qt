// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKINLICENSEREQUEST_H
#define QTAWS_CHECKINLICENSEREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class CheckInLicenseRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT CheckInLicenseRequest : public LicenseManagerRequest {

public:
    CheckInLicenseRequest(const CheckInLicenseRequest &other);
    CheckInLicenseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckInLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
