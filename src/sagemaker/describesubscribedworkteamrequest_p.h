// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIBEDWORKTEAMREQUEST_P_H
#define QTAWS_DESCRIBESUBSCRIBEDWORKTEAMREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describesubscribedworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeSubscribedWorkteamRequest;

class DescribeSubscribedWorkteamRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeSubscribedWorkteamRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeSubscribedWorkteamRequest * const q);
    DescribeSubscribedWorkteamRequestPrivate(const DescribeSubscribedWorkteamRequestPrivate &other,
                                   DescribeSubscribedWorkteamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSubscribedWorkteamRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
