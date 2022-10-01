// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITYRECOGNIZERREQUEST_P_H
#define QTAWS_DESCRIBEENTITYRECOGNIZERREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describeentityrecognizerrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeEntityRecognizerRequest;

class DescribeEntityRecognizerRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribeEntityRecognizerRequestPrivate(const ComprehendRequest::Action action,
                                   DescribeEntityRecognizerRequest * const q);
    DescribeEntityRecognizerRequestPrivate(const DescribeEntityRecognizerRequestPrivate &other,
                                   DescribeEntityRecognizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEntityRecognizerRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
