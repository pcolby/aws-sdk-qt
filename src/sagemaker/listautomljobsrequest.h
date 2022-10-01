// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTOMLJOBSREQUEST_H
#define QTAWS_LISTAUTOMLJOBSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListAutoMLJobsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListAutoMLJobsRequest : public SageMakerRequest {

public:
    ListAutoMLJobsRequest(const ListAutoMLJobsRequest &other);
    ListAutoMLJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAutoMLJobsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
