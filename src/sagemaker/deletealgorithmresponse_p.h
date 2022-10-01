// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALGORITHMRESPONSE_P_H
#define QTAWS_DELETEALGORITHMRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteAlgorithmResponse;

class DeleteAlgorithmResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteAlgorithmResponsePrivate(DeleteAlgorithmResponse * const q);

    void parseDeleteAlgorithmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAlgorithmResponse)
    Q_DISABLE_COPY(DeleteAlgorithmResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
