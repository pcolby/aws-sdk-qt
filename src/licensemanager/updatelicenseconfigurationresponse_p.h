// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELICENSECONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATELICENSECONFIGURATIONRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class UpdateLicenseConfigurationResponse;

class UpdateLicenseConfigurationResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit UpdateLicenseConfigurationResponsePrivate(UpdateLicenseConfigurationResponse * const q);

    void parseUpdateLicenseConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLicenseConfigurationResponse)
    Q_DISABLE_COPY(UpdateLicenseConfigurationResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
