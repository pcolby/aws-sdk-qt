// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKINLICENSERESPONSE_P_H
#define QTAWS_CHECKINLICENSERESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class CheckInLicenseResponse;

class CheckInLicenseResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit CheckInLicenseResponsePrivate(CheckInLicenseResponse * const q);

    void parseCheckInLicenseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CheckInLicenseResponse)
    Q_DISABLE_COPY(CheckInLicenseResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
