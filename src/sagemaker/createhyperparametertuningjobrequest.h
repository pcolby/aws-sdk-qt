// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHYPERPARAMETERTUNINGJOBREQUEST_H
#define QTAWS_CREATEHYPERPARAMETERTUNINGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateHyperParameterTuningJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateHyperParameterTuningJobRequest : public SageMakerRequest {

public:
    CreateHyperParameterTuningJobRequest(const CreateHyperParameterTuningJobRequest &other);
    CreateHyperParameterTuningJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHyperParameterTuningJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
