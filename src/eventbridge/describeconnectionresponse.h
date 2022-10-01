// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONRESPONSE_H
#define QTAWS_DESCRIBECONNECTIONRESPONSE_H

#include "eventbridgeresponse.h"
#include "describeconnectionrequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeConnectionResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribeConnectionResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    DescribeConnectionResponse(const DescribeConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionResponse)
    Q_DISABLE_COPY(DescribeConnectionResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
