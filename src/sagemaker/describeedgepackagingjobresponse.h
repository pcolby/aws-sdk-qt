// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEDGEPACKAGINGJOBRESPONSE_H
#define QTAWS_DESCRIBEEDGEPACKAGINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "describeedgepackagingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeEdgePackagingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeEdgePackagingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeEdgePackagingJobResponse(const DescribeEdgePackagingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEdgePackagingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEdgePackagingJobResponse)
    Q_DISABLE_COPY(DescribeEdgePackagingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
