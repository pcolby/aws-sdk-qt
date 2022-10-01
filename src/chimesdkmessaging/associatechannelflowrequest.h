// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECHANNELFLOWREQUEST_H
#define QTAWS_ASSOCIATECHANNELFLOWREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class AssociateChannelFlowRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT AssociateChannelFlowRequest : public ChimeSdkMessagingRequest {

public:
    AssociateChannelFlowRequest(const AssociateChannelFlowRequest &other);
    AssociateChannelFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
