// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEDGEPACKAGINGJOBRESPONSE_P_H
#define QTAWS_STOPEDGEPACKAGINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopEdgePackagingJobResponse;

class StopEdgePackagingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopEdgePackagingJobResponsePrivate(StopEdgePackagingJobResponse * const q);

    void parseStopEdgePackagingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopEdgePackagingJobResponse)
    Q_DISABLE_COPY(StopEdgePackagingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
