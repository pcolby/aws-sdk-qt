// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECANARIESLASTRUNREQUEST_P_H
#define QTAWS_DESCRIBECANARIESLASTRUNREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "describecanarieslastrunrequest.h"

namespace QtAws {
namespace Synthetics {

class DescribeCanariesLastRunRequest;

class DescribeCanariesLastRunRequestPrivate : public SyntheticsRequestPrivate {

public:
    DescribeCanariesLastRunRequestPrivate(const SyntheticsRequest::Action action,
                                   DescribeCanariesLastRunRequest * const q);
    DescribeCanariesLastRunRequestPrivate(const DescribeCanariesLastRunRequestPrivate &other,
                                   DescribeCanariesLastRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCanariesLastRunRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
