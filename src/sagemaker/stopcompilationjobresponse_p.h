// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCOMPILATIONJOBRESPONSE_P_H
#define QTAWS_STOPCOMPILATIONJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopCompilationJobResponse;

class StopCompilationJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopCompilationJobResponsePrivate(StopCompilationJobResponse * const q);

    void parseStopCompilationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopCompilationJobResponse)
    Q_DISABLE_COPY(StopCompilationJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
