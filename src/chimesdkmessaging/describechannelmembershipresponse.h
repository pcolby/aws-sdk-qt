// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPRESPONSE_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "describechannelmembershiprequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelMembershipResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelMembershipResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    DescribeChannelMembershipResponse(const DescribeChannelMembershipRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChannelMembershipRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelMembershipResponse)
    Q_DISABLE_COPY(DescribeChannelMembershipResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
