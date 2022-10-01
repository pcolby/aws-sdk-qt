// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGJOBRESPONSE_H
#define QTAWS_STOPTRAININGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "stoptrainingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopTrainingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StopTrainingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StopTrainingJobResponse(const StopTrainingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopTrainingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTrainingJobResponse)
    Q_DISABLE_COPY(StopTrainingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
