// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVALUATIONRESPONSE_P_H
#define QTAWS_DELETEEVALUATIONRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class DeleteEvaluationResponse;

class DeleteEvaluationResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit DeleteEvaluationResponsePrivate(DeleteEvaluationResponse * const q);

    void parseDeleteEvaluationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEvaluationResponse)
    Q_DISABLE_COPY(DeleteEvaluationResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
