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

#ifndef QTAWS_DESCRIBEACTIVITYREQUEST_P_H
#define QTAWS_DESCRIBEACTIVITYREQUEST_P_H

#include "sfnrequest_p.h"
#include "describeactivityrequest.h"

namespace QtAws {
namespace SFN {

class DescribeActivityRequest;

class QTAWS_EXPORT DescribeActivityRequestPrivate : public SfnRequestPrivate {

public:
    DescribeActivityRequestPrivate(const SfnRequest::Action action,
                                   DescribeActivityRequest * const q);
    DescribeActivityRequestPrivate(const DescribeActivityRequestPrivate &other,
                                   DescribeActivityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeActivityRequest)

};

} // namespace SFN
} // namespace QtAws

#endif
