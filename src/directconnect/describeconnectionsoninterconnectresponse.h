// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONSONINTERCONNECTRESPONSE_H
#define QTAWS_DESCRIBECONNECTIONSONINTERCONNECTRESPONSE_H

#include "directconnectresponse.h"
#include "describeconnectionsoninterconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeConnectionsOnInterconnectResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeConnectionsOnInterconnectResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeConnectionsOnInterconnectResponse(const DescribeConnectionsOnInterconnectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConnectionsOnInterconnectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionsOnInterconnectResponse)
    Q_DISABLE_COPY(DescribeConnectionsOnInterconnectResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
