// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSREQUEST_P_H
#define QTAWS_GETDEPLOYMENTSREQUEST_P_H

#include "sagemakeredgerequest_p.h"
#include "getdeploymentsrequest.h"

namespace QtAws {
namespace SagemakerEdge {

class GetDeploymentsRequest;

class GetDeploymentsRequestPrivate : public SagemakerEdgeRequestPrivate {

public:
    GetDeploymentsRequestPrivate(const SagemakerEdgeRequest::Action action,
                                   GetDeploymentsRequest * const q);
    GetDeploymentsRequestPrivate(const GetDeploymentsRequestPrivate &other,
                                   GetDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentsRequest)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
