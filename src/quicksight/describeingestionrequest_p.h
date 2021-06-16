/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_DESCRIBEINGESTIONREQUEST_P_H
#define QTAWS_DESCRIBEINGESTIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describeingestionrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeIngestionRequest;

class QTAWS_EXPORT DescribeIngestionRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeIngestionRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeIngestionRequest * const q);
    DescribeIngestionRequestPrivate(const DescribeIngestionRequestPrivate &other,
                                   DescribeIngestionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIngestionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
