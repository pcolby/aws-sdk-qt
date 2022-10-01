// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINERESPONSE_H
#define QTAWS_DESCRIBEPIPELINERESPONSE_H

#include "sagemakerresponse.h"
#include "describepipelinerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribePipelineResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribePipelineResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribePipelineResponse(const DescribePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePipelineResponse)
    Q_DISABLE_COPY(DescribePipelineResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
