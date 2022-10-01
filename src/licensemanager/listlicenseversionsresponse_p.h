// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSEVERSIONSRESPONSE_P_H
#define QTAWS_LISTLICENSEVERSIONSRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseVersionsResponse;

class ListLicenseVersionsResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListLicenseVersionsResponsePrivate(ListLicenseVersionsResponse * const q);

    void parseListLicenseVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLicenseVersionsResponse)
    Q_DISABLE_COPY(ListLicenseVersionsResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
