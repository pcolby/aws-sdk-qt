// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKFORCEREQUEST_H
#define QTAWS_CREATEWORKFORCEREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateWorkforceRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateWorkforceRequest : public SageMakerRequest {

public:
    CreateWorkforceRequest(const CreateWorkforceRequest &other);
    CreateWorkforceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkforceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
