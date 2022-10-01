// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAININGJOBREQUEST_H
#define QTAWS_CREATETRAININGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTrainingJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateTrainingJobRequest : public SageMakerRequest {

public:
    CreateTrainingJobRequest(const CreateTrainingJobRequest &other);
    CreateTrainingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrainingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
