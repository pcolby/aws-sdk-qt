// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSECONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTLICENSECONFIGURATIONSRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseConfigurationsResponse;

class ListLicenseConfigurationsResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListLicenseConfigurationsResponsePrivate(ListLicenseConfigurationsResponse * const q);

    void parseListLicenseConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLicenseConfigurationsResponse)
    Q_DISABLE_COPY(ListLicenseConfigurationsResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
