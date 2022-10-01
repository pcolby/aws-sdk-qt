// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGSREQUEST_P_H
#define QTAWS_DESCRIBETAGSREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "describetagsrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeTagsRequest;

class DescribeTagsRequestPrivate : public MachineLearningRequestPrivate {

public:
    DescribeTagsRequestPrivate(const MachineLearningRequest::Action action,
                                   DescribeTagsRequest * const q);
    DescribeTagsRequestPrivate(const DescribeTagsRequestPrivate &other,
                                   DescribeTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTagsRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
