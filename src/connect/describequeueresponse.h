// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUEUERESPONSE_H
#define QTAWS_DESCRIBEQUEUERESPONSE_H

#include "connectresponse.h"
#include "describequeuerequest.h"

namespace QtAws {
namespace Connect {

class DescribeQueueResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeQueueResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeQueueResponse(const DescribeQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQueueResponse)
    Q_DISABLE_COPY(DescribeQueueResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
