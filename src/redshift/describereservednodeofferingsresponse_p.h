// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODEOFFERINGSRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDNODEOFFERINGSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodeOfferingsResponse;

class DescribeReservedNodeOfferingsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeReservedNodeOfferingsResponsePrivate(DescribeReservedNodeOfferingsResponse * const q);

    void parseDescribeReservedNodeOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedNodeOfferingsResponse)
    Q_DISABLE_COPY(DescribeReservedNodeOfferingsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
