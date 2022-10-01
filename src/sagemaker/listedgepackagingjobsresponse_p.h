// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEDGEPACKAGINGJOBSRESPONSE_P_H
#define QTAWS_LISTEDGEPACKAGINGJOBSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListEdgePackagingJobsResponse;

class ListEdgePackagingJobsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListEdgePackagingJobsResponsePrivate(ListEdgePackagingJobsResponse * const q);

    void parseListEdgePackagingJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEdgePackagingJobsResponse)
    Q_DISABLE_COPY(ListEdgePackagingJobsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
