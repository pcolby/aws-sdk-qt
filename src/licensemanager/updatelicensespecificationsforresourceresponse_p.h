// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELICENSESPECIFICATIONSFORRESOURCERESPONSE_P_H
#define QTAWS_UPDATELICENSESPECIFICATIONSFORRESOURCERESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class UpdateLicenseSpecificationsForResourceResponse;

class UpdateLicenseSpecificationsForResourceResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit UpdateLicenseSpecificationsForResourceResponsePrivate(UpdateLicenseSpecificationsForResourceResponse * const q);

    void parseUpdateLicenseSpecificationsForResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLicenseSpecificationsForResourceResponse)
    Q_DISABLE_COPY(UpdateLicenseSpecificationsForResourceResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
