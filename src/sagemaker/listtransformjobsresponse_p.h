// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRANSFORMJOBSRESPONSE_P_H
#define QTAWS_LISTTRANSFORMJOBSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListTransformJobsResponse;

class ListTransformJobsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListTransformJobsResponsePrivate(ListTransformJobsResponse * const q);

    void parseListTransformJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTransformJobsResponse)
    Q_DISABLE_COPY(ListTransformJobsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
