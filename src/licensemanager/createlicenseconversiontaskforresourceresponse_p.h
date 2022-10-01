// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSECONVERSIONTASKFORRESOURCERESPONSE_P_H
#define QTAWS_CREATELICENSECONVERSIONTASKFORRESOURCERESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseConversionTaskForResourceResponse;

class CreateLicenseConversionTaskForResourceResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit CreateLicenseConversionTaskForResourceResponsePrivate(CreateLicenseConversionTaskForResourceResponse * const q);

    void parseCreateLicenseConversionTaskForResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLicenseConversionTaskForResourceResponse)
    Q_DISABLE_COPY(CreateLicenseConversionTaskForResourceResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
