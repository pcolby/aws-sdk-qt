// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAININGJOBRESPONSE_P_H
#define QTAWS_CREATETRAININGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateTrainingJobResponse;

class CreateTrainingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateTrainingJobResponsePrivate(CreateTrainingJobResponse * const q);

    void parseCreateTrainingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrainingJobResponse)
    Q_DISABLE_COPY(CreateTrainingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
