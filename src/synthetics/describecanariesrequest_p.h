// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECANARIESREQUEST_P_H
#define QTAWS_DESCRIBECANARIESREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "describecanariesrequest.h"

namespace QtAws {
namespace Synthetics {

class DescribeCanariesRequest;

class DescribeCanariesRequestPrivate : public SyntheticsRequestPrivate {

public:
    DescribeCanariesRequestPrivate(const SyntheticsRequest::Action action,
                                   DescribeCanariesRequest * const q);
    DescribeCanariesRequestPrivate(const DescribeCanariesRequestPrivate &other,
                                   DescribeCanariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCanariesRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
