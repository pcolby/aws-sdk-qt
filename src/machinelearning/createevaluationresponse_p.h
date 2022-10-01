// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVALUATIONRESPONSE_P_H
#define QTAWS_CREATEEVALUATIONRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class CreateEvaluationResponse;

class CreateEvaluationResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit CreateEvaluationResponsePrivate(CreateEvaluationResponse * const q);

    void parseCreateEvaluationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEvaluationResponse)
    Q_DISABLE_COPY(CreateEvaluationResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
