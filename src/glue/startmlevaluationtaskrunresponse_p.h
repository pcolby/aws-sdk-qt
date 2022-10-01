// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMLEVALUATIONTASKRUNRESPONSE_P_H
#define QTAWS_STARTMLEVALUATIONTASKRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StartMLEvaluationTaskRunResponse;

class StartMLEvaluationTaskRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit StartMLEvaluationTaskRunResponsePrivate(StartMLEvaluationTaskRunResponse * const q);

    void parseStartMLEvaluationTaskRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMLEvaluationTaskRunResponse)
    Q_DISABLE_COPY(StartMLEvaluationTaskRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
