// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTAUTHORIZERREQUEST_P_H
#define QTAWS_DESCRIBEDEFAULTAUTHORIZERREQUEST_P_H

#include "iotrequest_p.h"
#include "describedefaultauthorizerrequest.h"

namespace QtAws {
namespace IoT {

class DescribeDefaultAuthorizerRequest;

class DescribeDefaultAuthorizerRequestPrivate : public IoTRequestPrivate {

public:
    DescribeDefaultAuthorizerRequestPrivate(const IoTRequest::Action action,
                                   DescribeDefaultAuthorizerRequest * const q);
    DescribeDefaultAuthorizerRequestPrivate(const DescribeDefaultAuthorizerRequestPrivate &other,
                                   DescribeDefaultAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDefaultAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
