// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSFORMJOBRESPONSE_H
#define QTAWS_DESCRIBETRANSFORMJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "describetransformjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeTransformJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeTransformJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeTransformJobResponse(const DescribeTransformJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTransformJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTransformJobResponse)
    Q_DISABLE_COPY(DescribeTransformJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
