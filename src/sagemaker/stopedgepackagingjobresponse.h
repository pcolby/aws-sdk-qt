// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEDGEPACKAGINGJOBRESPONSE_H
#define QTAWS_STOPEDGEPACKAGINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "stopedgepackagingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopEdgePackagingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StopEdgePackagingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StopEdgePackagingJobResponse(const StopEdgePackagingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopEdgePackagingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEdgePackagingJobResponse)
    Q_DISABLE_COPY(StopEdgePackagingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
