// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONSETTINGSRESPONSE_P_H
#define QTAWS_UPDATENOTIFICATIONSETTINGSRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class UpdateNotificationSettingsResponse;

class UpdateNotificationSettingsResponsePrivate : public MTurkResponsePrivate {

public:

    explicit UpdateNotificationSettingsResponsePrivate(UpdateNotificationSettingsResponse * const q);

    void parseUpdateNotificationSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNotificationSettingsResponse)
    Q_DISABLE_COPY(UpdateNotificationSettingsResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
