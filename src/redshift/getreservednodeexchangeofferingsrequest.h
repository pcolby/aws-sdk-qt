// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVEDNODEEXCHANGEOFFERINGSREQUEST_H
#define QTAWS_GETRESERVEDNODEEXCHANGEOFFERINGSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class GetReservedNodeExchangeOfferingsRequestPrivate;

class QTAWSREDSHIFT_EXPORT GetReservedNodeExchangeOfferingsRequest : public RedshiftRequest {

public:
    GetReservedNodeExchangeOfferingsRequest(const GetReservedNodeExchangeOfferingsRequest &other);
    GetReservedNodeExchangeOfferingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReservedNodeExchangeOfferingsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
