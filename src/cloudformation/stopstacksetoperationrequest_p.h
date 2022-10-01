// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTACKSETOPERATIONREQUEST_P_H
#define QTAWS_STOPSTACKSETOPERATIONREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "stopstacksetoperationrequest.h"

namespace QtAws {
namespace CloudFormation {

class StopStackSetOperationRequest;

class StopStackSetOperationRequestPrivate : public CloudFormationRequestPrivate {

public:
    StopStackSetOperationRequestPrivate(const CloudFormationRequest::Action action,
                                   StopStackSetOperationRequest * const q);
    StopStackSetOperationRequestPrivate(const StopStackSetOperationRequestPrivate &other,
                                   StopStackSetOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopStackSetOperationRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
