// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTHORIZERREQUEST_P_H
#define QTAWS_DESCRIBEAUTHORIZERREQUEST_P_H

#include "iotrequest_p.h"
#include "describeauthorizerrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuthorizerRequest;

class DescribeAuthorizerRequestPrivate : public IoTRequestPrivate {

public:
    DescribeAuthorizerRequestPrivate(const IoTRequest::Action action,
                                   DescribeAuthorizerRequest * const q);
    DescribeAuthorizerRequestPrivate(const DescribeAuthorizerRequestPrivate &other,
                                   DescribeAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
