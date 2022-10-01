// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPERIMENTRESPONSE_H
#define QTAWS_DESCRIBEEXPERIMENTRESPONSE_H

#include "sagemakerresponse.h"
#include "describeexperimentrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeExperimentResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeExperimentResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeExperimentResponse(const DescribeExperimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeExperimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExperimentResponse)
    Q_DISABLE_COPY(DescribeExperimentResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
