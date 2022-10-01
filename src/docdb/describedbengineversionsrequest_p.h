// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBENGINEVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBEDBENGINEVERSIONSREQUEST_P_H

#include "docdbrequest_p.h"
#include "describedbengineversionsrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBEngineVersionsRequest;

class DescribeDBEngineVersionsRequestPrivate : public DocDbRequestPrivate {

public:
    DescribeDBEngineVersionsRequestPrivate(const DocDbRequest::Action action,
                                   DescribeDBEngineVersionsRequest * const q);
    DescribeDBEngineVersionsRequestPrivate(const DescribeDBEngineVersionsRequestPrivate &other,
                                   DescribeDBEngineVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBEngineVersionsRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
