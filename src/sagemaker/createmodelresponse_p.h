// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELRESPONSE_P_H
#define QTAWS_CREATEMODELRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateModelResponse;

class CreateModelResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateModelResponsePrivate(CreateModelResponse * const q);

    void parseCreateModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateModelResponse)
    Q_DISABLE_COPY(CreateModelResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
