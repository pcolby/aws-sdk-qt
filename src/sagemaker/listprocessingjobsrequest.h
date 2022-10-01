// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROCESSINGJOBSREQUEST_H
#define QTAWS_LISTPROCESSINGJOBSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListProcessingJobsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListProcessingJobsRequest : public SageMakerRequest {

public:
    ListProcessingJobsRequest(const ListProcessingJobsRequest &other);
    ListProcessingJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProcessingJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
