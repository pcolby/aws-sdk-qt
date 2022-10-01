// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRESPONSE_P_H
#define QTAWS_GETWORKFLOWRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetWorkflowResponse;

class GetWorkflowResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetWorkflowResponsePrivate(GetWorkflowResponse * const q);

    void parseGetWorkflowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkflowResponse)
    Q_DISABLE_COPY(GetWorkflowResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
