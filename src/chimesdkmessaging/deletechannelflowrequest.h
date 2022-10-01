// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELFLOWREQUEST_H
#define QTAWS_DELETECHANNELFLOWREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelFlowRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DeleteChannelFlowRequest : public ChimeSdkMessagingRequest {

public:
    DeleteChannelFlowRequest(const DeleteChannelFlowRequest &other);
    DeleteChannelFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
