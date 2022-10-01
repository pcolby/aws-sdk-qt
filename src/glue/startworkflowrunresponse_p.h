// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTWORKFLOWRUNRESPONSE_P_H
#define QTAWS_STARTWORKFLOWRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StartWorkflowRunResponse;

class StartWorkflowRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit StartWorkflowRunResponsePrivate(StartWorkflowRunResponse * const q);

    void parseStartWorkflowRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartWorkflowRunResponse)
    Q_DISABLE_COPY(StartWorkflowRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
