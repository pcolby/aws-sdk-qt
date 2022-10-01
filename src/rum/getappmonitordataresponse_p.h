// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPMONITORDATARESPONSE_P_H
#define QTAWS_GETAPPMONITORDATARESPONSE_P_H

#include "rumresponse_p.h"

namespace QtAws {
namespace Rum {

class GetAppMonitorDataResponse;

class GetAppMonitorDataResponsePrivate : public RumResponsePrivate {

public:

    explicit GetAppMonitorDataResponsePrivate(GetAppMonitorDataResponse * const q);

    void parseGetAppMonitorDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppMonitorDataResponse)
    Q_DISABLE_COPY(GetAppMonitorDataResponsePrivate)

};

} // namespace Rum
} // namespace QtAws

#endif
