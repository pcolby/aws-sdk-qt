// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETWORKFLOWSRESPONSE_P_H
#define QTAWS_BATCHGETWORKFLOWSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class BatchGetWorkflowsResponse;

class BatchGetWorkflowsResponsePrivate : public GlueResponsePrivate {

public:

    explicit BatchGetWorkflowsResponsePrivate(BatchGetWorkflowsResponse * const q);

    void parseBatchGetWorkflowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetWorkflowsResponse)
    Q_DISABLE_COPY(BatchGetWorkflowsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
