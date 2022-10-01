// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPILATIONJOBSREQUEST_H
#define QTAWS_LISTCOMPILATIONJOBSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListCompilationJobsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListCompilationJobsRequest : public SageMakerRequest {

public:
    ListCompilationJobsRequest(const ListCompilationJobsRequest &other);
    ListCompilationJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCompilationJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
