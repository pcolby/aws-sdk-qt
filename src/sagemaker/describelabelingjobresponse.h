// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELINGJOBRESPONSE_H
#define QTAWS_DESCRIBELABELINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "describelabelingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeLabelingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeLabelingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeLabelingJobResponse(const DescribeLabelingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLabelingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLabelingJobResponse)
    Q_DISABLE_COPY(DescribeLabelingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
