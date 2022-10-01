// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMLMODELSREQUEST_P_H
#define QTAWS_DESCRIBEMLMODELSREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "describemlmodelsrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeMLModelsRequest;

class DescribeMLModelsRequestPrivate : public MachineLearningRequestPrivate {

public:
    DescribeMLModelsRequestPrivate(const MachineLearningRequest::Action action,
                                   DescribeMLModelsRequest * const q);
    DescribeMLModelsRequestPrivate(const DescribeMLModelsRequestPrivate &other,
                                   DescribeMLModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMLModelsRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
