// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESREQUEST_H
#define QTAWS_DESCRIBERESERVEDINSTANCESREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeReservedInstancesRequestPrivate;

class QTAWSOPENSEARCH_EXPORT DescribeReservedInstancesRequest : public OpenSearchRequest {

public:
    DescribeReservedInstancesRequest(const DescribeReservedInstancesRequest &other);
    DescribeReservedInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedInstancesRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
