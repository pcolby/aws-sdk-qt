// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTFAILOVERREQUEST_P_H
#define QTAWS_TESTFAILOVERREQUEST_P_H

#include "elasticacherequest_p.h"
#include "testfailoverrequest.h"

namespace QtAws {
namespace ElastiCache {

class TestFailoverRequest;

class TestFailoverRequestPrivate : public ElastiCacheRequestPrivate {

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
