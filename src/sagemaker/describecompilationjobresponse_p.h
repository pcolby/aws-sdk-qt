// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPILATIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBECOMPILATIONJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeCompilationJobResponse;

class DescribeCompilationJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeCompilationJobResponsePrivate(DescribeCompilationJobResponse * const q);

    void parseDescribeCompilationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCompilationJobResponse)
    Q_DISABLE_COPY(DescribeCompilationJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
