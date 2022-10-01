// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVEDINSTANCESEXCHANGEQUOTERESPONSE_H
#define QTAWS_GETRESERVEDINSTANCESEXCHANGEQUOTERESPONSE_H

#include "ec2response.h"
#include "getreservedinstancesexchangequoterequest.h"

namespace QtAws {
namespace Ec2 {

class GetReservedInstancesExchangeQuoteResponsePrivate;

class QTAWSEC2_EXPORT GetReservedInstancesExchangeQuoteResponse : public Ec2Response {
    Q_OBJECT

public:
    GetReservedInstancesExchangeQuoteResponse(const GetReservedInstancesExchangeQuoteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReservedInstancesExchangeQuoteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReservedInstancesExchangeQuoteResponse)
    Q_DISABLE_COPY(GetReservedInstancesExchangeQuoteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
