// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSECONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETELICENSECONFIGURATIONRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseConfigurationResponse;

class DeleteLicenseConfigurationResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit DeleteLicenseConfigurationResponsePrivate(DeleteLicenseConfigurationResponse * const q);

    void parseDeleteLicenseConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLicenseConfigurationResponse)
    Q_DISABLE_COPY(DeleteLicenseConfigurationResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
