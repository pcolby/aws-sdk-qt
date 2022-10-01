// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPMONITORRESPONSE_P_H
#define QTAWS_UPDATEAPPMONITORRESPONSE_P_H

#include "rumresponse_p.h"

namespace QtAws {
namespace Rum {

class UpdateAppMonitorResponse;

class UpdateAppMonitorResponsePrivate : public RumResponsePrivate {

public:

    explicit UpdateAppMonitorResponsePrivate(UpdateAppMonitorResponse * const q);

    void parseUpdateAppMonitorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAppMonitorResponse)
    Q_DISABLE_COPY(UpdateAppMonitorResponsePrivate)

};

} // namespace Rum
} // namespace QtAws

#endif
