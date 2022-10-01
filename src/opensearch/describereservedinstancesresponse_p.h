// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCESRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DescribeReservedInstancesResponse;

class DescribeReservedInstancesResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DescribeReservedInstancesResponsePrivate(DescribeReservedInstancesResponse * const q);

    void parseDescribeReservedInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstancesResponse)
    Q_DISABLE_COPY(DescribeReservedInstancesResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
