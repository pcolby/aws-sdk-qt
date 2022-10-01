// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLOSEDWORKFLOWEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTCLOSEDWORKFLOWEXECUTIONSRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class ListClosedWorkflowExecutionsResponse;

class ListClosedWorkflowExecutionsResponsePrivate : public SwfResponsePrivate {

public:

    explicit ListClosedWorkflowExecutionsResponsePrivate(ListClosedWorkflowExecutionsResponse * const q);

    void parseListClosedWorkflowExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListClosedWorkflowExecutionsResponse)
    Q_DISABLE_COPY(ListClosedWorkflowExecutionsResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
