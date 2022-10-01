// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSERESPONSE_P_H
#define QTAWS_CREATELICENSERESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseResponse;

class CreateLicenseResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit CreateLicenseResponsePrivate(CreateLicenseResponse * const q);

    void parseCreateLicenseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLicenseResponse)
    Q_DISABLE_COPY(CreateLicenseResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
