// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIMENTRESPONSE_P_H
#define QTAWS_CREATEEXPERIMENTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateExperimentResponse;

class CreateExperimentResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateExperimentResponsePrivate(CreateExperimentResponse * const q);

    void parseCreateExperimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateExperimentResponse)
    Q_DISABLE_COPY(CreateExperimentResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
