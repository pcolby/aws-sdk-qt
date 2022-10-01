// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXTENDLICENSECONSUMPTIONREQUEST_P_H
#define QTAWS_EXTENDLICENSECONSUMPTIONREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "extendlicenseconsumptionrequest.h"

namespace QtAws {
namespace LicenseManager {

class ExtendLicenseConsumptionRequest;

class ExtendLicenseConsumptionRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ExtendLicenseConsumptionRequestPrivate(const LicenseManagerRequest::Action action,
                                   ExtendLicenseConsumptionRequest * const q);
    ExtendLicenseConsumptionRequestPrivate(const ExtendLicenseConsumptionRequestPrivate &other,
                                   ExtendLicenseConsumptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExtendLicenseConsumptionRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
