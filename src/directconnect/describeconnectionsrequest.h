// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONSREQUEST_H
#define QTAWS_DESCRIBECONNECTIONSREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeConnectionsRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeConnectionsRequest : public DirectConnectRequest {

public:
    DescribeConnectionsRequest(const DescribeConnectionsRequest &other);
    DescribeConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
