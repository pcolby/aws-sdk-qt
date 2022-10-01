// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIMENTREQUEST_H
#define QTAWS_CREATEEXPERIMENTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateExperimentRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateExperimentRequest : public SageMakerRequest {

public:
    CreateExperimentRequest(const CreateExperimentRequest &other);
    CreateExperimentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExperimentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
