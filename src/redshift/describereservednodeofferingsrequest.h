// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODEOFFERINGSREQUEST_H
#define QTAWS_DESCRIBERESERVEDNODEOFFERINGSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodeOfferingsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeReservedNodeOfferingsRequest : public RedshiftRequest {

public:
    DescribeReservedNodeOfferingsRequest(const DescribeReservedNodeOfferingsRequest &other);
    DescribeReservedNodeOfferingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedNodeOfferingsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
