// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMLMODELRESPONSE_P_H
#define QTAWS_CREATEMLMODELRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class CreateMLModelResponse;

class CreateMLModelResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit CreateMLModelResponsePrivate(CreateMLModelResponse * const q);

    void parseCreateMLModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMLModelResponse)
    Q_DISABLE_COPY(CreateMLModelResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
