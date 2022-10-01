// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEUPDATESREQUEST_P_H
#define QTAWS_DESCRIBESERVICEUPDATESREQUEST_P_H

#include "memorydbrequest_p.h"
#include "describeserviceupdatesrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeServiceUpdatesRequest;

class DescribeServiceUpdatesRequestPrivate : public MemoryDbRequestPrivate {

public:
    DescribeServiceUpdatesRequestPrivate(const MemoryDbRequest::Action action,
                                   DescribeServiceUpdatesRequest * const q);
    DescribeServiceUpdatesRequestPrivate(const DescribeServiceUpdatesRequestPrivate &other,
                                   DescribeServiceUpdatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServiceUpdatesRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
