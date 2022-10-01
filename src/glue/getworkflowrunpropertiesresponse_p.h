// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRUNPROPERTIESRESPONSE_P_H
#define QTAWS_GETWORKFLOWRUNPROPERTIESRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRunPropertiesResponse;

class GetWorkflowRunPropertiesResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetWorkflowRunPropertiesResponsePrivate(GetWorkflowRunPropertiesResponse * const q);

    void parseGetWorkflowRunPropertiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkflowRunPropertiesResponse)
    Q_DISABLE_COPY(GetWorkflowRunPropertiesResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
