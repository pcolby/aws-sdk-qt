// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROCESSINGJOBSRESPONSE_P_H
#define QTAWS_LISTPROCESSINGJOBSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListProcessingJobsResponse;

class ListProcessingJobsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListProcessingJobsResponsePrivate(ListProcessingJobsResponse * const q);

    void parseListProcessingJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProcessingJobsResponse)
    Q_DISABLE_COPY(ListProcessingJobsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
