// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUMANLOOPREQUEST_P_H
#define QTAWS_DESCRIBEHUMANLOOPREQUEST_P_H

#include "sagemakera2iruntimerequest_p.h"
#include "describehumanlooprequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class DescribeHumanLoopRequest;

class DescribeHumanLoopRequestPrivate : public SageMakerA2IRuntimeRequestPrivate {

public:
    DescribeHumanLoopRequestPrivate(const SageMakerA2IRuntimeRequest::Action action,
                                   DescribeHumanLoopRequest * const q);
    DescribeHumanLoopRequestPrivate(const DescribeHumanLoopRequestPrivate &other,
                                   DescribeHumanLoopRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHumanLoopRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
