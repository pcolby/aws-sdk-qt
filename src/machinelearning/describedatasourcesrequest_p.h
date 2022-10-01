// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCESREQUEST_P_H
#define QTAWS_DESCRIBEDATASOURCESREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "describedatasourcesrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeDataSourcesRequest;

class DescribeDataSourcesRequestPrivate : public MachineLearningRequestPrivate {

public:
    DescribeDataSourcesRequestPrivate(const MachineLearningRequest::Action action,
                                   DescribeDataSourcesRequest * const q);
    DescribeDataSourcesRequestPrivate(const DescribeDataSourcesRequestPrivate &other,
                                   DescribeDataSourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataSourcesRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
