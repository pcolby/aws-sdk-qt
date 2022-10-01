// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXTENDLICENSECONSUMPTIONREQUEST_H
#define QTAWS_EXTENDLICENSECONSUMPTIONREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class ExtendLicenseConsumptionRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT ExtendLicenseConsumptionRequest : public LicenseManagerRequest {

public:
    ExtendLicenseConsumptionRequest(const ExtendLicenseConsumptionRequest &other);
    ExtendLicenseConsumptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExtendLicenseConsumptionRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
