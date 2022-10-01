// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBENGINEVERSIONSREQUEST_P_H
#define QTAWS_DESCRIBEDBENGINEVERSIONSREQUEST_P_H

#include "neptunerequest_p.h"
#include "describedbengineversionsrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBEngineVersionsRequest;

class DescribeDBEngineVersionsRequestPrivate : public NeptuneRequestPrivate {

public:
    DescribeDBEngineVersionsRequestPrivate(const NeptuneRequest::Action action,
                                   DescribeDBEngineVersionsRequest * const q);
    DescribeDBEngineVersionsRequestPrivate(const DescribeDBEngineVersionsRequestPrivate &other,
                                   DescribeDBEngineVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBEngineVersionsRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
