// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPROFILEREQUEST_P_H
#define QTAWS_DESCRIBEUSERPROFILEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeuserprofilerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeUserProfileRequest;

class DescribeUserProfileRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeUserProfileRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeUserProfileRequest * const q);
    DescribeUserProfileRequestPrivate(const DescribeUserProfileRequestPrivate &other,
                                   DescribeUserProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserProfileRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
