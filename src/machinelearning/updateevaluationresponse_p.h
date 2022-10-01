// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVALUATIONRESPONSE_P_H
#define QTAWS_UPDATEEVALUATIONRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class UpdateEvaluationResponse;

class UpdateEvaluationResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit UpdateEvaluationResponsePrivate(UpdateEvaluationResponse * const q);

    void parseUpdateEvaluationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEvaluationResponse)
    Q_DISABLE_COPY(UpdateEvaluationResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
