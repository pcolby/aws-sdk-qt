// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEDGEPACKAGINGJOBRESPONSE_P_H
#define QTAWS_CREATEEDGEPACKAGINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateEdgePackagingJobResponse;

class CreateEdgePackagingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateEdgePackagingJobResponsePrivate(CreateEdgePackagingJobResponse * const q);

    void parseCreateEdgePackagingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEdgePackagingJobResponse)
    Q_DISABLE_COPY(CreateEdgePackagingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
