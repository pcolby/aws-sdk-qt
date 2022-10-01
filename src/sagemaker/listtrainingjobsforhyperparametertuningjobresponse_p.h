// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAININGJOBSFORHYPERPARAMETERTUNINGJOBRESPONSE_P_H
#define QTAWS_LISTTRAININGJOBSFORHYPERPARAMETERTUNINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListTrainingJobsForHyperParameterTuningJobResponse;

class ListTrainingJobsForHyperParameterTuningJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListTrainingJobsForHyperParameterTuningJobResponsePrivate(ListTrainingJobsForHyperParameterTuningJobResponse * const q);

    void parseListTrainingJobsForHyperParameterTuningJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrainingJobsForHyperParameterTuningJobResponse)
    Q_DISABLE_COPY(ListTrainingJobsForHyperParameterTuningJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
