// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMERGENCYCONTACTSETTINGSRESPONSE_P_H
#define QTAWS_UPDATEEMERGENCYCONTACTSETTINGSRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class UpdateEmergencyContactSettingsResponse;

class UpdateEmergencyContactSettingsResponsePrivate : public ShieldResponsePrivate {

public:

    explicit UpdateEmergencyContactSettingsResponsePrivate(UpdateEmergencyContactSettingsResponse * const q);

    void parseUpdateEmergencyContactSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEmergencyContactSettingsResponse)
    Q_DISABLE_COPY(UpdateEmergencyContactSettingsResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
