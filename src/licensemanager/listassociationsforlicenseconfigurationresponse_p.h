// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONSFORLICENSECONFIGURATIONRESPONSE_P_H
#define QTAWS_LISTASSOCIATIONSFORLICENSECONFIGURATIONRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListAssociationsForLicenseConfigurationResponse;

class ListAssociationsForLicenseConfigurationResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListAssociationsForLicenseConfigurationResponsePrivate(ListAssociationsForLicenseConfigurationResponse * const q);

    void parseListAssociationsForLicenseConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociationsForLicenseConfigurationResponse)
    Q_DISABLE_COPY(ListAssociationsForLicenseConfigurationResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
