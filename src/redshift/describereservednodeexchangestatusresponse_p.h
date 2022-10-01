// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODEEXCHANGESTATUSRESPONSE_P_H
#define QTAWS_DESCRIBERESERVEDNODEEXCHANGESTATUSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodeExchangeStatusResponse;

class DescribeReservedNodeExchangeStatusResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeReservedNodeExchangeStatusResponsePrivate(DescribeReservedNodeExchangeStatusResponse * const q);

    void parseDescribeReservedNodeExchangeStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReservedNodeExchangeStatusResponse)
    Q_DISABLE_COPY(DescribeReservedNodeExchangeStatusResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
