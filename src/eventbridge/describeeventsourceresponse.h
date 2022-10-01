// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSOURCERESPONSE_H
#define QTAWS_DESCRIBEEVENTSOURCERESPONSE_H

#include "eventbridgeresponse.h"
#include "describeeventsourcerequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeEventSourceResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribeEventSourceResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    DescribeEventSourceResponse(const DescribeEventSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventSourceResponse)
    Q_DISABLE_COPY(DescribeEventSourceResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
