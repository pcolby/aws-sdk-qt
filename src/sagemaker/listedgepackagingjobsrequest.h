// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEDGEPACKAGINGJOBSREQUEST_H
#define QTAWS_LISTEDGEPACKAGINGJOBSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListEdgePackagingJobsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListEdgePackagingJobsRequest : public SageMakerRequest {

public:
    ListEdgePackagingJobsRequest(const ListEdgePackagingJobsRequest &other);
    ListEdgePackagingJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEdgePackagingJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
