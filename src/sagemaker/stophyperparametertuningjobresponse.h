// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPHYPERPARAMETERTUNINGJOBRESPONSE_H
#define QTAWS_STOPHYPERPARAMETERTUNINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "stophyperparametertuningjobrequest.h"

namespace QtAws {
namespace SageMaker {

class StopHyperParameterTuningJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT StopHyperParameterTuningJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    StopHyperParameterTuningJobResponse(const StopHyperParameterTuningJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopHyperParameterTuningJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopHyperParameterTuningJobResponse)
    Q_DISABLE_COPY(StopHyperParameterTuningJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
