// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMODERATORRESPONSE_H
#define QTAWS_DESCRIBECHANNELMODERATORRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "describechannelmoderatorrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelModeratorResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelModeratorResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    DescribeChannelModeratorResponse(const DescribeChannelModeratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChannelModeratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelModeratorResponse)
    Q_DISABLE_COPY(DescribeChannelModeratorResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
