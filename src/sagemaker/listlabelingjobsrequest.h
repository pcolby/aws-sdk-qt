// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELINGJOBSREQUEST_H
#define QTAWS_LISTLABELINGJOBSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListLabelingJobsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListLabelingJobsRequest : public SageMakerRequest {

public:
    ListLabelingJobsRequest(const ListLabelingJobsRequest &other);
    ListLabelingJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLabelingJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
