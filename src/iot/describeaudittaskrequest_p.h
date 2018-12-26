/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEAUDITTASKREQUEST_P_H
#define QTAWS_DESCRIBEAUDITTASKREQUEST_P_H

#include "iotrequest_p.h"
#include "describeaudittaskrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditTaskRequest;

class QTAWS_EXPORT DescribeAuditTaskRequestPrivate : public IoTRequestPrivate {

public:
    DescribeAuditTaskRequestPrivate(const IoTRequest::Action action,
                                   DescribeAuditTaskRequest * const q);
    DescribeAuditTaskRequestPrivate(const DescribeAuditTaskRequestPrivate &other,
                                   DescribeAuditTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAuditTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
