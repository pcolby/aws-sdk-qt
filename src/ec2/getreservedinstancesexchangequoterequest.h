// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVEDINSTANCESEXCHANGEQUOTEREQUEST_H
#define QTAWS_GETRESERVEDINSTANCESEXCHANGEQUOTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetReservedInstancesExchangeQuoteRequestPrivate;

class QTAWSEC2_EXPORT GetReservedInstancesExchangeQuoteRequest : public Ec2Request {

public:
    GetReservedInstancesExchangeQuoteRequest(const GetReservedInstancesExchangeQuoteRequest &other);
    GetReservedInstancesExchangeQuoteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReservedInstancesExchangeQuoteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
