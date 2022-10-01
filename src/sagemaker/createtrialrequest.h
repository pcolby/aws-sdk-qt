// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRIALREQUEST_H
#define QTAWS_CREATETRIALREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTrialRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateTrialRequest : public SageMakerRequest {

public:
    CreateTrialRequest(const CreateTrialRequest &other);
    CreateTrialRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrialRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
