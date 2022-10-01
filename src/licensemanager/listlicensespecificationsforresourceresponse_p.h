// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSESPECIFICATIONSFORRESOURCERESPONSE_P_H
#define QTAWS_LISTLICENSESPECIFICATIONSFORRESOURCERESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseSpecificationsForResourceResponse;

class ListLicenseSpecificationsForResourceResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListLicenseSpecificationsForResourceResponsePrivate(ListLicenseSpecificationsForResourceResponse * const q);

    void parseListLicenseSpecificationsForResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLicenseSpecificationsForResourceResponse)
    Q_DISABLE_COPY(ListLicenseSpecificationsForResourceResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
