// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTRESERVEDINSTANCESEXCHANGEQUOTEREQUEST_H
#define QTAWS_ACCEPTRESERVEDINSTANCESEXCHANGEQUOTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AcceptReservedInstancesExchangeQuoteRequestPrivate;

class QTAWSEC2_EXPORT AcceptReservedInstancesExchangeQuoteRequest : public Ec2Request {

public:
    AcceptReservedInstancesExchangeQuoteRequest(const AcceptReservedInstancesExchangeQuoteRequest &other);
    AcceptReservedInstancesExchangeQuoteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptReservedInstancesExchangeQuoteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
