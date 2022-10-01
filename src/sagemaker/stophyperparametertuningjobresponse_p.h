// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPHYPERPARAMETERTUNINGJOBRESPONSE_P_H
#define QTAWS_STOPHYPERPARAMETERTUNINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopHyperParameterTuningJobResponse;

class StopHyperParameterTuningJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopHyperParameterTuningJobResponsePrivate(StopHyperParameterTuningJobResponse * const q);

    void parseStopHyperParameterTuningJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopHyperParameterTuningJobResponse)
    Q_DISABLE_COPY(StopHyperParameterTuningJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
