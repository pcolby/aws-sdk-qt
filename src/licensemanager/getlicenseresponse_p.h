// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSERESPONSE_P_H
#define QTAWS_GETLICENSERESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseResponse;

class GetLicenseResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit GetLicenseResponsePrivate(GetLicenseResponse * const q);

    void parseGetLicenseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLicenseResponse)
    Q_DISABLE_COPY(GetLicenseResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
