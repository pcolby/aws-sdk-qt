// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGJOBRESPONSE_P_H
#define QTAWS_STOPTRAININGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class StopTrainingJobResponse;

class StopTrainingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit StopTrainingJobResponsePrivate(StopTrainingJobResponse * const q);

    void parseStopTrainingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopTrainingJobResponse)
    Q_DISABLE_COPY(StopTrainingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
