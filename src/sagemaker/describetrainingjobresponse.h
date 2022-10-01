// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAININGJOBRESPONSE_H
#define QTAWS_DESCRIBETRAININGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "describetrainingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeTrainingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeTrainingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeTrainingJobResponse(const DescribeTrainingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrainingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrainingJobResponse)
    Q_DISABLE_COPY(DescribeTrainingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
