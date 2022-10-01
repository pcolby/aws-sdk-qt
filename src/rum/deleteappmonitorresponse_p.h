// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPMONITORRESPONSE_P_H
#define QTAWS_DELETEAPPMONITORRESPONSE_P_H

#include "rumresponse_p.h"

namespace QtAws {
namespace Rum {

class DeleteAppMonitorResponse;

class DeleteAppMonitorResponsePrivate : public RumResponsePrivate {

public:

    explicit DeleteAppMonitorResponsePrivate(DeleteAppMonitorResponse * const q);

    void parseDeleteAppMonitorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppMonitorResponse)
    Q_DISABLE_COPY(DeleteAppMonitorResponsePrivate)

};

} // namespace Rum
} // namespace QtAws

#endif
