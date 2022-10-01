// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHYPERPARAMETERTUNINGJOBRESPONSE_P_H
#define QTAWS_CREATEHYPERPARAMETERTUNINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateHyperParameterTuningJobResponse;

class CreateHyperParameterTuningJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateHyperParameterTuningJobResponsePrivate(CreateHyperParameterTuningJobResponse * const q);

    void parseCreateHyperParameterTuningJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHyperParameterTuningJobResponse)
    Q_DISABLE_COPY(CreateHyperParameterTuningJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
