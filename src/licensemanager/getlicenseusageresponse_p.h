// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSEUSAGERESPONSE_P_H
#define QTAWS_GETLICENSEUSAGERESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseUsageResponse;

class GetLicenseUsageResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit GetLicenseUsageResponsePrivate(GetLicenseUsageResponse * const q);

    void parseGetLicenseUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLicenseUsageResponse)
    Q_DISABLE_COPY(GetLicenseUsageResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
