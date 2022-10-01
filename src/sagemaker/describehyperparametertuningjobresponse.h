// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHYPERPARAMETERTUNINGJOBRESPONSE_H
#define QTAWS_DESCRIBEHYPERPARAMETERTUNINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "describehyperparametertuningjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeHyperParameterTuningJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeHyperParameterTuningJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeHyperParameterTuningJobResponse(const DescribeHyperParameterTuningJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHyperParameterTuningJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHyperParameterTuningJobResponse)
    Q_DISABLE_COPY(DescribeHyperParameterTuningJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
