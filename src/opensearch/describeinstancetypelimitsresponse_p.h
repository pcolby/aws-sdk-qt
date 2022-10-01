// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPELIMITSRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCETYPELIMITSRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DescribeInstanceTypeLimitsResponse;

class DescribeInstanceTypeLimitsResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DescribeInstanceTypeLimitsResponsePrivate(DescribeInstanceTypeLimitsResponse * const q);

    void parseDescribeInstanceTypeLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceTypeLimitsResponse)
    Q_DISABLE_COPY(DescribeInstanceTypeLimitsResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
