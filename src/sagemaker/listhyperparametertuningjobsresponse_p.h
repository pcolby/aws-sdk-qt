// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHYPERPARAMETERTUNINGJOBSRESPONSE_P_H
#define QTAWS_LISTHYPERPARAMETERTUNINGJOBSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListHyperParameterTuningJobsResponse;

class ListHyperParameterTuningJobsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListHyperParameterTuningJobsResponsePrivate(ListHyperParameterTuningJobsResponse * const q);

    void parseListHyperParameterTuningJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHyperParameterTuningJobsResponse)
    Q_DISABLE_COPY(ListHyperParameterTuningJobsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
