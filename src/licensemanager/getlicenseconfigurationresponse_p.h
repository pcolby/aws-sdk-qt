// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSECONFIGURATIONRESPONSE_P_H
#define QTAWS_GETLICENSECONFIGURATIONRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseConfigurationResponse;

class GetLicenseConfigurationResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit GetLicenseConfigurationResponsePrivate(GetLicenseConfigurationResponse * const q);

    void parseGetLicenseConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLicenseConfigurationResponse)
    Q_DISABLE_COPY(GetLicenseConfigurationResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
