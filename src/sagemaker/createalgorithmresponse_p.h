// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALGORITHMRESPONSE_P_H
#define QTAWS_CREATEALGORITHMRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateAlgorithmResponse;

class CreateAlgorithmResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateAlgorithmResponsePrivate(CreateAlgorithmResponse * const q);

    void parseCreateAlgorithmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAlgorithmResponse)
    Q_DISABLE_COPY(CreateAlgorithmResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
