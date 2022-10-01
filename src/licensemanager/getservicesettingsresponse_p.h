// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESETTINGSRESPONSE_P_H
#define QTAWS_GETSERVICESETTINGSRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class GetServiceSettingsResponse;

class GetServiceSettingsResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit GetServiceSettingsResponsePrivate(GetServiceSettingsResponse * const q);

    void parseGetServiceSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceSettingsResponse)
    Q_DISABLE_COPY(GetServiceSettingsResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
