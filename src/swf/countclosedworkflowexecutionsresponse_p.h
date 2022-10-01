// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COUNTCLOSEDWORKFLOWEXECUTIONSRESPONSE_P_H
#define QTAWS_COUNTCLOSEDWORKFLOWEXECUTIONSRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class CountClosedWorkflowExecutionsResponse;

class CountClosedWorkflowExecutionsResponsePrivate : public SwfResponsePrivate {

public:

    explicit CountClosedWorkflowExecutionsResponsePrivate(CountClosedWorkflowExecutionsResponse * const q);

    void parseCountClosedWorkflowExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CountClosedWorkflowExecutionsResponse)
    Q_DISABLE_COPY(CountClosedWorkflowExecutionsResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
