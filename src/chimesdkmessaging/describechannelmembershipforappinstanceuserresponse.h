// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERRESPONSE_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "describechannelmembershipforappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DescribeChannelMembershipForAppInstanceUserResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DescribeChannelMembershipForAppInstanceUserResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    DescribeChannelMembershipForAppInstanceUserResponse(const DescribeChannelMembershipForAppInstanceUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChannelMembershipForAppInstanceUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelMembershipForAppInstanceUserResponse)
    Q_DISABLE_COPY(DescribeChannelMembershipForAppInstanceUserResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
