// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVALUATIONRESPONSE_P_H
#define QTAWS_GETEVALUATIONRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class GetEvaluationResponse;

class GetEvaluationResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit GetEvaluationResponsePrivate(GetEvaluationResponse * const q);

    void parseGetEvaluationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEvaluationResponse)
    Q_DISABLE_COPY(GetEvaluationResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
