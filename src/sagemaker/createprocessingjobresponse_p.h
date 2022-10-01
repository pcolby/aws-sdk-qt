// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROCESSINGJOBRESPONSE_P_H
#define QTAWS_CREATEPROCESSINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateProcessingJobResponse;

class CreateProcessingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateProcessingJobResponsePrivate(CreateProcessingJobResponse * const q);

    void parseCreateProcessingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProcessingJobResponse)
    Q_DISABLE_COPY(CreateProcessingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
