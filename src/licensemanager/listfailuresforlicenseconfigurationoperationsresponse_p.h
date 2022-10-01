// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFAILURESFORLICENSECONFIGURATIONOPERATIONSRESPONSE_P_H
#define QTAWS_LISTFAILURESFORLICENSECONFIGURATIONOPERATIONSRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListFailuresForLicenseConfigurationOperationsResponse;

class ListFailuresForLicenseConfigurationOperationsResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListFailuresForLicenseConfigurationOperationsResponsePrivate(ListFailuresForLicenseConfigurationOperationsResponse * const q);

    void parseListFailuresForLicenseConfigurationOperationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFailuresForLicenseConfigurationOperationsResponse)
    Q_DISABLE_COPY(ListFailuresForLicenseConfigurationOperationsResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
