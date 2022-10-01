// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKFLOWRESPONSE_P_H
#define QTAWS_UPDATEWORKFLOWRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateWorkflowResponse;

class UpdateWorkflowResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateWorkflowResponsePrivate(UpdateWorkflowResponse * const q);

    void parseUpdateWorkflowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkflowResponse)
    Q_DISABLE_COPY(UpdateWorkflowResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
