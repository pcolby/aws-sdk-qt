// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSECONVERSIONTASKRESPONSE_P_H
#define QTAWS_GETLICENSECONVERSIONTASKRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseConversionTaskResponse;

class GetLicenseConversionTaskResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit GetLicenseConversionTaskResponsePrivate(GetLicenseConversionTaskResponse * const q);

    void parseGetLicenseConversionTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLicenseConversionTaskResponse)
    Q_DISABLE_COPY(GetLicenseConversionTaskResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
