// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLABELINGJOBRESPONSE_P_H
#define QTAWS_STOPLABELINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopLabelingJobResponse;

class StopLabelingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopLabelingJobResponsePrivate(StopLabelingJobResponse * const q);

    void parseStopLabelingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopLabelingJobResponse)
    Q_DISABLE_COPY(StopLabelingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
