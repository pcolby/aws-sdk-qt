// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSASSOCIATEDWITHCHANNELFLOWREQUEST_H
#define QTAWS_LISTCHANNELSASSOCIATEDWITHCHANNELFLOWREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelsAssociatedWithChannelFlowRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelsAssociatedWithChannelFlowRequest : public ChimeSdkMessagingRequest {

public:
    ListChannelsAssociatedWithChannelFlowRequest(const ListChannelsAssociatedWithChannelFlowRequest &other);
    ListChannelsAssociatedWithChannelFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelsAssociatedWithChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
