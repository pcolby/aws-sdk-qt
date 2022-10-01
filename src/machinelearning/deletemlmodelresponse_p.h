// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMLMODELRESPONSE_P_H
#define QTAWS_DELETEMLMODELRESPONSE_P_H

#include "machinelearningresponse_p.h"

namespace QtAws {
namespace MachineLearning {

class DeleteMLModelResponse;

class DeleteMLModelResponsePrivate : public MachineLearningResponsePrivate {

public:

    explicit DeleteMLModelResponsePrivate(DeleteMLModelResponse * const q);

    void parseDeleteMLModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMLModelResponse)
    Q_DISABLE_COPY(DeleteMLModelResponsePrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
