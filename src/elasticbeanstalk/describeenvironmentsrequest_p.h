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

#ifndef QTAWS_DESCRIBEENVIRONMENTSREQUEST_P_H
#define QTAWS_DESCRIBEENVIRONMENTSREQUEST_P_H

#include "elasticbeanstalk_p.h"
#include "describeenvironmentsrequest.h"

namespace AWS {

namespace ElasticBeanstalk {

class DescribeEnvironmentsRequest;

class QTAWS_EXPORT DescribeEnvironmentsRequestPrivate : public ElasticBeanstalkPrivate {

public:
    DescribeEnvironmentsRequestPrivate(const ElasticBeanstalk::Action action,
                                   DescribeEnvironmentsRequest * const q);
    DescribeEnvironmentsRequestPrivate(const DescribeEnvironmentsRequestPrivate &other,
                                   DescribeEnvironmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentsRequest)

};

} // namespace ElasticBeanstalk
} // namespace AWS

#endif
