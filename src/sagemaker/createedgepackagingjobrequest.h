// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEDGEPACKAGINGJOBREQUEST_H
#define QTAWS_CREATEEDGEPACKAGINGJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEdgePackagingJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT CreateEdgePackagingJobRequest : public SageMakerRequest {

public:
    CreateEdgePackagingJobRequest(const CreateEdgePackagingJobRequest &other);
    CreateEdgePackagingJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEdgePackagingJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
