// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRANSFORMJOBRESPONSE_P_H
#define QTAWS_STOPTRANSFORMJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopTransformJobResponse;

class StopTransformJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopTransformJobResponsePrivate(StopTransformJobResponse * const q);

    void parseStopTransformJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopTransformJobResponse)
    Q_DISABLE_COPY(StopTransformJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
