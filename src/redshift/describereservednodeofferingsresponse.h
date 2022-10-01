// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODEOFFERINGSRESPONSE_H
#define QTAWS_DESCRIBERESERVEDNODEOFFERINGSRESPONSE_H

#include "redshiftresponse.h"
#include "describereservednodeofferingsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodeOfferingsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeReservedNodeOfferingsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeReservedNodeOfferingsResponse(const DescribeReservedNodeOfferingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedNodeOfferingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedNodeOfferingsResponse)
    Q_DISABLE_COPY(DescribeReservedNodeOfferingsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
