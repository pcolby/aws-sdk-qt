// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAININGJOBRESPONSE_P_H
#define QTAWS_UPDATETRAININGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class UpdateTrainingJobResponse;

class UpdateTrainingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit UpdateTrainingJobResponsePrivate(UpdateTrainingJobResponse * const q);

    void parseUpdateTrainingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTrainingJobResponse)
    Q_DISABLE_COPY(UpdateTrainingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
