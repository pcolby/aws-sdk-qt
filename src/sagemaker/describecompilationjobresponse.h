// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPILATIONJOBRESPONSE_H
#define QTAWS_DESCRIBECOMPILATIONJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "describecompilationjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeCompilationJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeCompilationJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeCompilationJobResponse(const DescribeCompilationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCompilationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCompilationJobResponse)
    Q_DISABLE_COPY(DescribeCompilationJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
