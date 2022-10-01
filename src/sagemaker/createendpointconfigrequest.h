// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTCONFIGREQUEST_H
#define QTAWS_CREATEENDPOINTCONFIGREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEndpointConfigRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateEndpointConfigRequest : public SageMakerRequest {

public:
    CreateEndpointConfigRequest(const CreateEndpointConfigRequest &other);
    CreateEndpointConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEndpointConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
