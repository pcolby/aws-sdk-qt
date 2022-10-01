// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIMENTRESPONSE_P_H
#define QTAWS_DELETEEXPERIMENTRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteExperimentResponse;

class DeleteExperimentResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteExperimentResponsePrivate(DeleteExperimentResponse * const q);

    void parseDeleteExperimentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteExperimentResponse)
    Q_DISABLE_COPY(DeleteExperimentResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
