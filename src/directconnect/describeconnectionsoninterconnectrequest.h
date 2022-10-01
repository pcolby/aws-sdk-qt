// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONSONINTERCONNECTREQUEST_H
#define QTAWS_DESCRIBECONNECTIONSONINTERCONNECTREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeConnectionsOnInterconnectRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeConnectionsOnInterconnectRequest : public DirectConnectRequest {

public:
    DescribeConnectionsOnInterconnectRequest(const DescribeConnectionsOnInterconnectRequest &other);
    DescribeConnectionsOnInterconnectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionsOnInterconnectRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
