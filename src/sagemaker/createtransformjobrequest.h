// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSFORMJOBREQUEST_H
#define QTAWS_CREATETRANSFORMJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTransformJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateTransformJobRequest : public SageMakerRequest {

public:
    CreateTransformJobRequest(const CreateTransformJobRequest &other);
    CreateTransformJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransformJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
