// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSFORMJOBRESPONSE_P_H
#define QTAWS_CREATETRANSFORMJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateTransformJobResponse;

class CreateTransformJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateTransformJobResponsePrivate(CreateTransformJobResponse * const q);

    void parseCreateTransformJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransformJobResponse)
    Q_DISABLE_COPY(CreateTransformJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
