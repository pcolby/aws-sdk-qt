// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTPENDINGACTIVITYTASKSRESPONSE_P_H
#define QTAWS_COUNTPENDINGACTIVITYTASKSRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class CountPendingActivityTasksResponse;

class CountPendingActivityTasksResponsePrivate : public SwfResponsePrivate {

public:

    explicit CountPendingActivityTasksResponsePrivate(CountPendingActivityTasksResponse * const q);

    void parseCountPendingActivityTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CountPendingActivityTasksResponse)
    Q_DISABLE_COPY(CountPendingActivityTasksResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
