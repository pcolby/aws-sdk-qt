// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONSETTINGSRESPONSE_P_H
#define QTAWS_UPDATEAPPLICATIONSETTINGSRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApplicationSettingsResponse;

class UpdateApplicationSettingsResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateApplicationSettingsResponsePrivate(UpdateApplicationSettingsResponse * const q);

    void parseUpdateApplicationSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationSettingsResponse)
    Q_DISABLE_COPY(UpdateApplicationSettingsResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
