// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRIALCOMPONENTREQUEST_H
#define QTAWS_CREATETRIALCOMPONENTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTrialComponentRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateTrialComponentRequest : public SageMakerRequest {

public:
    CreateTrialComponentRequest(const CreateTrialComponentRequest &other);
    CreateTrialComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
