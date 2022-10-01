// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTRESPONSE_H
#define QTAWS_DESCRIBEENDPOINTRESPONSE_H

#include "eventbridgeresponse.h"
#include "describeendpointrequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeEndpointResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribeEndpointResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    DescribeEndpointResponse(const DescribeEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointResponse)
    Q_DISABLE_COPY(DescribeEndpointResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
