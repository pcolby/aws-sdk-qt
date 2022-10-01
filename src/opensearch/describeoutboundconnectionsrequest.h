// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOUTBOUNDCONNECTIONSREQUEST_H
#define QTAWS_DESCRIBEOUTBOUNDCONNECTIONSREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeOutboundConnectionsRequestPrivate;

class QTAWSOPENSEARCH_EXPORT DescribeOutboundConnectionsRequest : public OpenSearchRequest {

public:
    DescribeOutboundConnectionsRequest(const DescribeOutboundConnectionsRequest &other);
    DescribeOutboundConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOutboundConnectionsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
