/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEDEFAULTPARAMETERSREQUEST_P_H
#define QTAWS_DESCRIBEDEFAULTPARAMETERSREQUEST_P_H

#include "daxrequest_p.h"
#include "describedefaultparametersrequest.h"

namespace QtAws {
namespace DAX {

class DescribeDefaultParametersRequest;

class QTAWS_EXPORT DescribeDefaultParametersRequestPrivate : public DaxRequestPrivate {

public:
    DescribeDefaultParametersRequestPrivate(const DaxRequest::Action action,
                                   DescribeDefaultParametersRequest * const q);
    DescribeDefaultParametersRequestPrivate(const DescribeDefaultParametersRequestPrivate &other,
                                   DescribeDefaultParametersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDefaultParametersRequest)

};

} // namespace DAX
} // namespace QtAws

#endif
