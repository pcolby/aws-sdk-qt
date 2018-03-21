/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEEVALUATIONSREQUEST_P_H
#define QTAWS_DESCRIBEEVALUATIONSREQUEST_P_H

#include "machinelearning_p.h"
#include "describeevaluationsrequest.h"

namespace AWS {

namespace MachineLearning {

class DescribeEvaluationsRequest;

class QTAWS_EXPORT DescribeEvaluationsRequestPrivate : public MachineLearningPrivate {

public:
    DescribeEvaluationsRequestPrivate(const MachineLearning::Action action,
                                   DescribeEvaluationsRequest * const q);
    DescribeEvaluationsRequestPrivate(const DescribeEvaluationsRequestPrivate &other,
                                   DescribeEvaluationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEvaluationsRequest)

};

} // namespace MachineLearning
} // namespace AWS

#endif
