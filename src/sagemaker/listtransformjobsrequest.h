// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRANSFORMJOBSREQUEST_H
#define QTAWS_LISTTRANSFORMJOBSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTransformJobsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListTransformJobsRequest : public SageMakerRequest {

public:
    ListTransformJobsRequest(const ListTransformJobsRequest &other);
    ListTransformJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTransformJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
