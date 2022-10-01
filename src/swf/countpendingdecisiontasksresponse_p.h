// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTPENDINGDECISIONTASKSRESPONSE_P_H
#define QTAWS_COUNTPENDINGDECISIONTASKSRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class CountPendingDecisionTasksResponse;

class CountPendingDecisionTasksResponsePrivate : public SwfResponsePrivate {

public:

    explicit CountPendingDecisionTasksResponsePrivate(CountPendingDecisionTasksResponse * const q);

    void parseCountPendingDecisionTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CountPendingDecisionTasksResponse)
    Q_DISABLE_COPY(CountPendingDecisionTasksResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
