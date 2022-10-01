// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTEPREQUEST_P_H
#define QTAWS_DESCRIBESTEPREQUEST_P_H

#include "emrrequest_p.h"
#include "describesteprequest.h"

namespace QtAws {
namespace Emr {

class DescribeStepRequest;

class DescribeStepRequestPrivate : public EmrRequestPrivate {

public:
    DescribeStepRequestPrivate(const EmrRequest::Action action,
                                   DescribeStepRequest * const q);
    DescribeStepRequestPrivate(const DescribeStepRequestPrivate &other,
                                   DescribeStepRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStepRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
