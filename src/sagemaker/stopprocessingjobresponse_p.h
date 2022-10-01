// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPROCESSINGJOBRESPONSE_P_H
#define QTAWS_STOPPROCESSINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopProcessingJobResponse;

class StopProcessingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopProcessingJobResponsePrivate(StopProcessingJobResponse * const q);

    void parseStopProcessingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopProcessingJobResponse)
    Q_DISABLE_COPY(StopProcessingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
