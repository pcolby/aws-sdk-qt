// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELRESPONSE_H
#define QTAWS_DESCRIBECHANNELRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "describechannelrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    DescribeChannelResponse(const DescribeChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelResponse)
    Q_DISABLE_COPY(DescribeChannelResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
