// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPWORKFLOWRUNRESPONSE_P_H
#define QTAWS_STOPWORKFLOWRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StopWorkflowRunResponse;

class StopWorkflowRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit StopWorkflowRunResponsePrivate(StopWorkflowRunResponse * const q);

    void parseStopWorkflowRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopWorkflowRunResponse)
    Q_DISABLE_COPY(StopWorkflowRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
