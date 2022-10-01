// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMLMODELRESPONSE_P_H
#define QTAWS_UPDATEMLMODELRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class UpdateMLModelResponse;

class UpdateMLModelResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit UpdateMLModelResponsePrivate(UpdateMLModelResponse * const q);

    void parseUpdateMLModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMLModelResponse)
    Q_DISABLE_COPY(UpdateMLModelResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
