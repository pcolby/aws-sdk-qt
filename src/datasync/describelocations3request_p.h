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

#ifndef QTAWS_DESCRIBELOCATIONS3REQUEST_P_H
#define QTAWS_DESCRIBELOCATIONS3REQUEST_P_H

#include "datasyncrequest_p.h"
#include "describelocations3request.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationS3Request;

class QTAWS_EXPORT DescribeLocationS3RequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeLocationS3RequestPrivate(const DataSyncRequest::Action action,
                                   DescribeLocationS3Request * const q);
    DescribeLocationS3RequestPrivate(const DescribeLocationS3RequestPrivate &other,
                                   DescribeLocationS3Request * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLocationS3Request)

};

} // namespace DataSync
} // namespace QtAws

#endif
