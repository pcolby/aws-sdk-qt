// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESRESPONSE_H
#define QTAWS_DESCRIBERESERVEDINSTANCESRESPONSE_H

#include "opensearchresponse.h"
#include "describereservedinstancesrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeReservedInstancesResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DescribeReservedInstancesResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DescribeReservedInstancesResponse(const DescribeReservedInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReservedInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedInstancesResponse)
    Q_DISABLE_COPY(DescribeReservedInstancesResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
