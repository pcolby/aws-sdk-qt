// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTRESERVEDINSTANCESEXCHANGEQUOTERESPONSE_H
#define QTAWS_ACCEPTRESERVEDINSTANCESEXCHANGEQUOTERESPONSE_H

#include "ec2response.h"
#include "acceptreservedinstancesexchangequoterequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptReservedInstancesExchangeQuoteResponsePrivate;

class QTAWSEC2_EXPORT AcceptReservedInstancesExchangeQuoteResponse : public Ec2Response {
    Q_OBJECT

public:
    AcceptReservedInstancesExchangeQuoteResponse(const AcceptReservedInstancesExchangeQuoteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptReservedInstancesExchangeQuoteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptReservedInstancesExchangeQuoteResponse)
    Q_DISABLE_COPY(AcceptReservedInstancesExchangeQuoteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
