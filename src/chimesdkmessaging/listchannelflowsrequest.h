// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELFLOWSREQUEST_H
#define QTAWS_LISTCHANNELFLOWSREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelFlowsRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelFlowsRequest : public ChimeSdkMessagingRequest {

public:
    ListChannelFlowsRequest(const ListChannelFlowsRequest &other);
    ListChannelFlowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelFlowsRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
