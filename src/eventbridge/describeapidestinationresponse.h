// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPIDESTINATIONRESPONSE_H
#define QTAWS_DESCRIBEAPIDESTINATIONRESPONSE_H

#include "eventbridgeresponse.h"
#include "describeapidestinationrequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeApiDestinationResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribeApiDestinationResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    DescribeApiDestinationResponse(const DescribeApiDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApiDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApiDestinationResponse)
    Q_DISABLE_COPY(DescribeApiDestinationResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
