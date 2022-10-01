// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPLABELINGJOBRESPONSE_H
#define QTAWS_STOPLABELINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "stoplabelingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopLabelingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StopLabelingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StopLabelingJobResponse(const StopLabelingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopLabelingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopLabelingJobResponse)
    Q_DISABLE_COPY(StopLabelingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
