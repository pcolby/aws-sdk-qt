// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMLLABELINGSETGENERATIONTASKRUNRESPONSE_P_H
#define QTAWS_STARTMLLABELINGSETGENERATIONTASKRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class StartMLLabelingSetGenerationTaskRunResponse;

class StartMLLabelingSetGenerationTaskRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit StartMLLabelingSetGenerationTaskRunResponsePrivate(StartMLLabelingSetGenerationTaskRunResponse * const q);

    void parseStartMLLabelingSetGenerationTaskRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMLLabelingSetGenerationTaskRunResponse)
    Q_DISABLE_COPY(StartMLLabelingSetGenerationTaskRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
