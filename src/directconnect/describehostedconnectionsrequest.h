// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTEDCONNECTIONSREQUEST_H
#define QTAWS_DESCRIBEHOSTEDCONNECTIONSREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeHostedConnectionsRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeHostedConnectionsRequest : public DirectConnectRequest {

public:
    DescribeHostedConnectionsRequest(const DescribeHostedConnectionsRequest &other);
    DescribeHostedConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHostedConnectionsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
