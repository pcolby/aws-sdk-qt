// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAININGJOBSFORHYPERPARAMETERTUNINGJOBREQUEST_H
#define QTAWS_LISTTRAININGJOBSFORHYPERPARAMETERTUNINGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTrainingJobsForHyperParameterTuningJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListTrainingJobsForHyperParameterTuningJobRequest : public SageMakerRequest {

public:
    ListTrainingJobsForHyperParameterTuningJobRequest(const ListTrainingJobsForHyperParameterTuningJobRequest &other);
    ListTrainingJobsForHyperParameterTuningJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrainingJobsForHyperParameterTuningJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
