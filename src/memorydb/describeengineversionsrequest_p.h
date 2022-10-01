// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGINEVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBEENGINEVERSIONSREQUEST_P_H

#include "memorydbrequest_p.h"
#include "describeengineversionsrequest.h"

namespace QtAws {
namespace MemoryDb {

class DescribeEngineVersionsRequest;

class DescribeEngineVersionsRequestPrivate : public MemoryDbRequestPrivate {

public:
    DescribeEngineVersionsRequestPrivate(const MemoryDbRequest::Action action,
                                   DescribeEngineVersionsRequest * const q);
    DescribeEngineVersionsRequestPrivate(const DescribeEngineVersionsRequestPrivate &other,
                                   DescribeEngineVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEngineVersionsRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
