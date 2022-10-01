// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXTENDLICENSECONSUMPTIONRESPONSE_P_H
#define QTAWS_EXTENDLICENSECONSUMPTIONRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ExtendLicenseConsumptionResponse;

class ExtendLicenseConsumptionResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ExtendLicenseConsumptionResponsePrivate(ExtendLicenseConsumptionResponse * const q);

    void parseExtendLicenseConsumptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExtendLicenseConsumptionResponse)
    Q_DISABLE_COPY(ExtendLicenseConsumptionResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
