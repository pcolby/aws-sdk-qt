// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELINGJOBSRESPONSE_P_H
#define QTAWS_LISTLABELINGJOBSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListLabelingJobsResponse;

class ListLabelingJobsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListLabelingJobsResponsePrivate(ListLabelingJobsResponse * const q);

    void parseListLabelingJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLabelingJobsResponse)
    Q_DISABLE_COPY(ListLabelingJobsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
