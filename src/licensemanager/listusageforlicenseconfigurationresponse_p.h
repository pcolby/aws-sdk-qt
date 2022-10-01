// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSAGEFORLICENSECONFIGURATIONRESPONSE_P_H
#define QTAWS_LISTUSAGEFORLICENSECONFIGURATIONRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListUsageForLicenseConfigurationResponse;

class ListUsageForLicenseConfigurationResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListUsageForLicenseConfigurationResponsePrivate(ListUsageForLicenseConfigurationResponse * const q);

    void parseListUsageForLicenseConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUsageForLicenseConfigurationResponse)
    Q_DISABLE_COPY(ListUsageForLicenseConfigurationResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
