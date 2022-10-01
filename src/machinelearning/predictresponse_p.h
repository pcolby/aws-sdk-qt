// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREDICTRESPONSE_P_H
#define QTAWS_PREDICTRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class PredictResponse;

class PredictResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit PredictResponsePrivate(PredictResponse * const q);

    void parsePredictResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PredictResponse)
    Q_DISABLE_COPY(PredictResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
