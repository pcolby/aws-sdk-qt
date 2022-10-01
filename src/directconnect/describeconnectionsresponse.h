// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONSRESPONSE_H
#define QTAWS_DESCRIBECONNECTIONSRESPONSE_H

#include "directconnectresponse.h"
#include "describeconnectionsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeConnectionsResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeConnectionsResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeConnectionsResponse(const DescribeConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionsResponse)
    Q_DISABLE_COPY(DescribeConnectionsResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
