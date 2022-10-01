// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCEOFFERINGSRESPONSE_H
#define QTAWS_DESCRIBERESERVEDINSTANCEOFFERINGSRESPONSE_H

#include "opensearchresponse.h"
#include "describereservedinstanceofferingsrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeReservedInstanceOfferingsResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DescribeReservedInstanceOfferingsResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DescribeReservedInstanceOfferingsResponse(const DescribeReservedInstanceOfferingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedInstanceOfferingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedInstanceOfferingsResponse)
    Q_DISABLE_COPY(DescribeReservedInstanceOfferingsResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
