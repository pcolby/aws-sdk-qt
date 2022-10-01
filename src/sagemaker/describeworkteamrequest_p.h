// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKTEAMREQUEST_P_H
#define QTAWS_DESCRIBEWORKTEAMREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeWorkteamRequest;

class DescribeWorkteamRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeWorkteamRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeWorkteamRequest * const q);
    DescribeWorkteamRequestPrivate(const DescribeWorkteamRequestPrivate &other,
                                   DescribeWorkteamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkteamRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
