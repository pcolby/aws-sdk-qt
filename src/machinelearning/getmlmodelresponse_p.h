// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLMODELRESPONSE_P_H
#define QTAWS_GETMLMODELRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class GetMLModelResponse;

class GetMLModelResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit GetMLModelResponsePrivate(GetMLModelResponse * const q);

    void parseGetMLModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMLModelResponse)
    Q_DISABLE_COPY(GetMLModelResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
