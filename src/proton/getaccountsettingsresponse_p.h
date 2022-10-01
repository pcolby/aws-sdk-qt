// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTSETTINGSRESPONSE_P_H
#define QTAWS_GETACCOUNTSETTINGSRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class GetAccountSettingsResponse;

class GetAccountSettingsResponsePrivate : public ProtonResponsePrivate {

public:

    explicit GetAccountSettingsResponsePrivate(GetAccountSettingsResponse * const q);

    void parseGetAccountSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountSettingsResponse)
    Q_DISABLE_COPY(GetAccountSettingsResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
