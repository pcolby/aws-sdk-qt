// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSERESPONSE_P_H
#define QTAWS_DELETELICENSERESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseResponse;

class DeleteLicenseResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit DeleteLicenseResponsePrivate(DeleteLicenseResponse * const q);

    void parseDeleteLicenseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLicenseResponse)
    Q_DISABLE_COPY(DeleteLicenseResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
