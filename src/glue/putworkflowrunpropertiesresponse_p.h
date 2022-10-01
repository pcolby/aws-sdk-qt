// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTWORKFLOWRUNPROPERTIESRESPONSE_P_H
#define QTAWS_PUTWORKFLOWRUNPROPERTIESRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class PutWorkflowRunPropertiesResponse;

class PutWorkflowRunPropertiesResponsePrivate : public GlueResponsePrivate {

public:

    explicit PutWorkflowRunPropertiesResponsePrivate(PutWorkflowRunPropertiesResponse * const q);

    void parsePutWorkflowRunPropertiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutWorkflowRunPropertiesResponse)
    Q_DISABLE_COPY(PutWorkflowRunPropertiesResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
