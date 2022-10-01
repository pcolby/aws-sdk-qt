// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPMONITORRESPONSE_P_H
#define QTAWS_CREATEAPPMONITORRESPONSE_P_H

#include "rumresponse_p.h"

namespace QtAws {
namespace Rum {

class CreateAppMonitorResponse;

class CreateAppMonitorResponsePrivate : public RumResponsePrivate {

public:

    explicit CreateAppMonitorResponsePrivate(CreateAppMonitorResponse * const q);

    void parseCreateAppMonitorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAppMonitorResponse)
    Q_DISABLE_COPY(CreateAppMonitorResponsePrivate)

};

} // namespace Rum
} // namespace QtAws

#endif
