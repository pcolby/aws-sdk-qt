// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECHANNELFLOWREQUEST_H
#define QTAWS_DISASSOCIATECHANNELFLOWREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DisassociateChannelFlowRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DisassociateChannelFlowRequest : public ChimeSdkMessagingRequest {

public:
    DisassociateChannelFlowRequest(const DisassociateChannelFlowRequest &other);
    DisassociateChannelFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
