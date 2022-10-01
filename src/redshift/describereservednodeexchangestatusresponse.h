// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODEEXCHANGESTATUSRESPONSE_H
#define QTAWS_DESCRIBERESERVEDNODEEXCHANGESTATUSRESPONSE_H

#include "redshiftresponse.h"
#include "describereservednodeexchangestatusrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodeExchangeStatusResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeReservedNodeExchangeStatusResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeReservedNodeExchangeStatusResponse(const DescribeReservedNodeExchangeStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedNodeExchangeStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedNodeExchangeStatusResponse)
    Q_DISABLE_COPY(DescribeReservedNodeExchangeStatusResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
