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

#ifndef QTAWS_TESTFAILOVERREQUEST_P_H
#define QTAWS_TESTFAILOVERREQUEST_P_H

#include "elasticacherequest_p.h"
#include "testfailoverrequest.h"

namespace QtAws {
namespace ElastiCache {

class TestFailoverRequest;

class QTAWS_EXPORT TestFailoverRequestPrivate : public ElastiCacheRequestPrivate {

public:
    TestFailoverRequestPrivate(const ElastiCacheRequest::Action action,
                                   TestFailoverRequest * const q);
    TestFailoverRequestPrivate(const TestFailoverRequestPrivate &other,
                                   TestFailoverRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestFailoverRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
