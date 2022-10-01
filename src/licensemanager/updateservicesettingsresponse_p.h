// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICESETTINGSRESPONSE_P_H
#define QTAWS_UPDATESERVICESETTINGSRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class UpdateServiceSettingsResponse;

class UpdateServiceSettingsResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit UpdateServiceSettingsResponsePrivate(UpdateServiceSettingsResponse * const q);

    void parseUpdateServiceSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServiceSettingsResponse)
    Q_DISABLE_COPY(UpdateServiceSettingsResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
