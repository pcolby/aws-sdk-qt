// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILEDEFAULTOUTBOUNDQUEUEREQUEST_H
#define QTAWS_UPDATEROUTINGPROFILEDEFAULTOUTBOUNDQUEUEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileDefaultOutboundQueueRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateRoutingProfileDefaultOutboundQueueRequest : public ConnectRequest {

public:
    UpdateRoutingProfileDefaultOutboundQueueRequest(const UpdateRoutingProfileDefaultOutboundQueueRequest &other);
    UpdateRoutingProfileDefaultOutboundQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingProfileDefaultOutboundQueueRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
