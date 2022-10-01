// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCEOFFERINGSRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCEOFFERINGSRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DescribeReservedInstanceOfferingsResponse;

class DescribeReservedInstanceOfferingsResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DescribeReservedInstanceOfferingsResponsePrivate(DescribeReservedInstanceOfferingsResponse * const q);

    void parseDescribeReservedInstanceOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstanceOfferingsResponse)
    Q_DISABLE_COPY(DescribeReservedInstanceOfferingsResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
