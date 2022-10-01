// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAININGJOBSFORHYPERPARAMETERTUNINGJOBRESPONSE_H
#define QTAWS_LISTTRAININGJOBSFORHYPERPARAMETERTUNINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "listtrainingjobsforhyperparametertuningjobrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTrainingJobsForHyperParameterTuningJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListTrainingJobsForHyperParameterTuningJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListTrainingJobsForHyperParameterTuningJobResponse(const ListTrainingJobsForHyperParameterTuningJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrainingJobsForHyperParameterTuningJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrainingJobsForHyperParameterTuningJobResponse)
    Q_DISABLE_COPY(ListTrainingJobsForHyperParameterTuningJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
