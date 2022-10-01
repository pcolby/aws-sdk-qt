// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANNELFLOWCALLBACKREQUEST_H
#define QTAWS_CHANNELFLOWCALLBACKREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ChannelFlowCallbackRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ChannelFlowCallbackRequest : public ChimeSdkMessagingRequest {

public:
    ChannelFlowCallbackRequest(const ChannelFlowCallbackRequest &other);
    ChannelFlowCallbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChannelFlowCallbackRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
