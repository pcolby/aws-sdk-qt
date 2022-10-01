// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEWORKFLOWRUNRESPONSE_P_H
#define QTAWS_RESUMEWORKFLOWRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ResumeWorkflowRunResponse;

class ResumeWorkflowRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit ResumeWorkflowRunResponsePrivate(ResumeWorkflowRunResponse * const q);

    void parseResumeWorkflowRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResumeWorkflowRunResponse)
    Q_DISABLE_COPY(ResumeWorkflowRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
