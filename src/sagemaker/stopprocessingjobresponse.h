// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPROCESSINGJOBRESPONSE_H
#define QTAWS_STOPPROCESSINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "stopprocessingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopProcessingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StopProcessingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StopProcessingJobResponse(const StopProcessingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopProcessingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopProcessingJobResponse)
    Q_DISABLE_COPY(StopProcessingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
