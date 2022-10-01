// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRUNSRESPONSE_P_H
#define QTAWS_GETWORKFLOWRUNSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRunsResponse;

class GetWorkflowRunsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetWorkflowRunsResponsePrivate(GetWorkflowRunsResponse * const q);

    void parseGetWorkflowRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkflowRunsResponse)
    Q_DISABLE_COPY(GetWorkflowRunsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
