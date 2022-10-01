// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSECONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATELICENSECONFIGURATIONRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseConfigurationResponse;

class CreateLicenseConfigurationResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit CreateLicenseConfigurationResponsePrivate(CreateLicenseConfigurationResponse * const q);

    void parseCreateLicenseConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLicenseConfigurationResponse)
    Q_DISABLE_COPY(CreateLicenseConfigurationResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
