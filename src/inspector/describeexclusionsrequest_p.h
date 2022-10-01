// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXCLUSIONSREQUEST_P_H
#define QTAWS_DESCRIBEEXCLUSIONSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "describeexclusionsrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeExclusionsRequest;

class DescribeExclusionsRequestPrivate : public InspectorRequestPrivate {

public:
    DescribeExclusionsRequestPrivate(const InspectorRequest::Action action,
                                   DescribeExclusionsRequest * const q);
    DescribeExclusionsRequestPrivate(const DescribeExclusionsRequestPrivate &other,
                                   DescribeExclusionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExclusionsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
