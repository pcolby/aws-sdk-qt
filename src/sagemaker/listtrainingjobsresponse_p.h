// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAININGJOBSRESPONSE_P_H
#define QTAWS_LISTTRAININGJOBSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListTrainingJobsResponse;

class ListTrainingJobsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListTrainingJobsResponsePrivate(ListTrainingJobsResponse * const q);

    void parseListTrainingJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTrainingJobsResponse)
    Q_DISABLE_COPY(ListTrainingJobsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
