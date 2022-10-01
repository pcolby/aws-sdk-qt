// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRAININGJOBREQUEST_H
#define QTAWS_STOPTRAININGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class StopTrainingJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT StopTrainingJobRequest : public SageMakerRequest {

public:
    StopTrainingJobRequest(const StopTrainingJobRequest &other);
    StopTrainingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTrainingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
