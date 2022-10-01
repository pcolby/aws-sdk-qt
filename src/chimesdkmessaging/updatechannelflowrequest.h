// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELFLOWREQUEST_H
#define QTAWS_UPDATECHANNELFLOWREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class UpdateChannelFlowRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT UpdateChannelFlowRequest : public ChimeSdkMessagingRequest {

public:
    UpdateChannelFlowRequest(const UpdateChannelFlowRequest &other);
    UpdateChannelFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
