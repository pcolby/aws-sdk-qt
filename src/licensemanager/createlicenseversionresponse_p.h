// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSEVERSIONRESPONSE_P_H
#define QTAWS_CREATELICENSEVERSIONRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseVersionResponse;

class CreateLicenseVersionResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit CreateLicenseVersionResponsePrivate(CreateLicenseVersionResponse * const q);

    void parseCreateLicenseVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLicenseVersionResponse)
    Q_DISABLE_COPY(CreateLicenseVersionResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
