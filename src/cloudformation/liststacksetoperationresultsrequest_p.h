// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETOPERATIONRESULTSREQUEST_P_H
#define QTAWS_LISTSTACKSETOPERATIONRESULTSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "liststacksetoperationresultsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetOperationResultsRequest;

class ListStackSetOperationResultsRequestPrivate : public CloudFormationRequestPrivate {

public:
    ListStackSetOperationResultsRequestPrivate(const CloudFormationRequest::Action action,
                                   ListStackSetOperationResultsRequest * const q);
    ListStackSetOperationResultsRequestPrivate(const ListStackSetOperationResultsRequestPrivate &other,
                                   ListStackSetOperationResultsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStackSetOperationResultsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
