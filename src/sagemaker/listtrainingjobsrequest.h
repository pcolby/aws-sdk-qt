// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAININGJOBSREQUEST_H
#define QTAWS_LISTTRAININGJOBSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListTrainingJobsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListTrainingJobsRequest : public SageMakerRequest {

public:
    ListTrainingJobsRequest(const ListTrainingJobsRequest &other);
    ListTrainingJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrainingJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
