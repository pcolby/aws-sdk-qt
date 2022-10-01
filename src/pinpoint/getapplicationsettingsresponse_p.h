// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONSETTINGSRESPONSE_P_H
#define QTAWS_GETAPPLICATIONSETTINGSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetApplicationSettingsResponse;

class GetApplicationSettingsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetApplicationSettingsResponsePrivate(GetApplicationSettingsResponse * const q);

    void parseGetApplicationSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApplicationSettingsResponse)
    Q_DISABLE_COPY(GetApplicationSettingsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
