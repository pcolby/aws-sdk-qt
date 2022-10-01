// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKFLOWRESPONSE_P_H
#define QTAWS_CREATEWORKFLOWRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateWorkflowResponse;

class CreateWorkflowResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateWorkflowResponsePrivate(CreateWorkflowResponse * const q);

    void parseCreateWorkflowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWorkflowResponse)
    Q_DISABLE_COPY(CreateWorkflowResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
