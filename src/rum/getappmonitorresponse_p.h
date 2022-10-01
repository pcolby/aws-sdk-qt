// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPMONITORRESPONSE_P_H
#define QTAWS_GETAPPMONITORRESPONSE_P_H

#include "rumresponse_p.h"

namespace QtAws {
namespace Rum {

class GetAppMonitorResponse;

class GetAppMonitorResponsePrivate : public RumResponsePrivate {

public:

    explicit GetAppMonitorResponsePrivate(GetAppMonitorResponse * const q);

    void parseGetAppMonitorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppMonitorResponse)
    Q_DISABLE_COPY(GetAppMonitorResponsePrivate)

};

} // namespace Rum
} // namespace QtAws

#endif
