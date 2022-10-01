// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPILATIONJOBSRESPONSE_P_H
#define QTAWS_LISTCOMPILATIONJOBSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListCompilationJobsResponse;

class ListCompilationJobsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListCompilationJobsResponsePrivate(ListCompilationJobsResponse * const q);

    void parseListCompilationJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCompilationJobsResponse)
    Q_DISABLE_COPY(ListCompilationJobsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
